#clang setup
import subprocess
def SetClang(env):
    env['CXX'] = 'clang++'
    env['CC'] = 'clang'

    path = ['/afs/cern.ch/user/f/fnewson/work/programs/llvm-build/Release+Asserts/bin',
            '/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin', 
            '/usr/local/bin', '/bin', '/usr/bin', '/usr/local/sbin', '/usr/sbin' ,'/sbin']

    ld_library_path = ['/afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/lib64','/lib64']

    env.Append( ENV = 
            { 'PATH' : ":".join(path), 
                'LD_LIBRARY_PATH' : ':'.join(ld_library_path), 
                'TERM': 'xterm' } )

AddMethod( Environment, SetClang )

def SetGCC( env ):
    path = [ '/afs/cern.ch/sw/lcg/contrib/gcc/4.7.2/i686-slc6-gcc47-opt/bin',
            '/usr/local/bin', '/bin', '/usr/bin', '/usr/local/sbin', '/usr/sbin' ,'/sbin']

    env['CXX'] = '/afs/cern.ch/sw/lcg/contrib/gcc/4.7.2/i686-slc6-gcc47-opt/bin/g++'
    env['CC'] = '/afs/cern.ch/sw/lcg/contrib/gcc/4.7.2/i686-slc6-gcc47-opt/bin/gcc'

    ld_library_path = ['/afs/cern.ch/sw/lcg/contrib/gcc/4.7.2/i686-slc6-gcc47-opt/lib','/lib']

    env.AppendENVPath(  'PATH' , ":".join(path) )
    env.AppendENVPath( 'LD_LIBRARY_PATH' , ':'.join(ld_library_path) )
    env.AppendENVPath( 'TERM', 'xterm'  )

AddMethod( Environment, SetGCC )

def SetRoot( env, root_home ):
    root_config = os.path.join( root_home, 'bin', 'root-config' )
    root_libdir = subprocess.check_output( [root_config, '--libdir'])
    root_incdir = subprocess.check_output( [root_config, '--incdir'])
    root_cflags = subprocess.check_output( [root_config, '--cflags'])
    env.Append( ROOTPATH = root_home )
    env.Append( CPPPATH = [root_incdir.rstrip()] )
    env.Append( LIBPATH = [root_libdir.rstrip()] )
    env.Append( CCFLAGS = root_cflags )
    env.AppendENVPath( 'LD_LIBRARY_PATH', root_libdir.rstrip() )
    env.Append( LIBS = ['Core','Cint','RIO','Net','Hist','Graf','Graf3d','Gpad',
        'Tree','Rint','Postscript','Matrix','Physics','MathCore','Thread','pthread','m','dl'] )

AddMethod( Environment, SetRoot )

def SetBoost( env, boost_home, boost_name ):
    boost_libdir = os.path.join( boost_home , 'lib' )
    boost_incdir = os.path.join( boost_home, os.path.join('include', boost_name ) )
    env.Append( CXXFLAGS = '-isystem ' + boost_incdir )
    env.Append( LIBPATH = boost_libdir )
    env.Append( RPATH = [boost_libdir] )

AddMethod( Environment, SetBoost )

def SetYaml( env, yaml_home ):
    env.Append( CPPPATH = os.path.join( yaml_home, 'include' ) )
    env.Append( LIBPATH = os.path.join( yaml_home, 'process_build' ) )
    env.Append( LIBS = 'yaml-cpp' )
    env.Append( RPATH = [os.path.join( yaml_home, 'process_build' )] )

AddMethod( Environment, SetYaml )

def AddLibs( env, libs ):
    env.Append( CPPPATH = [ os.path.join('../', lib, 'inc' ) for lib in libs] )
    env.Append( LIBPATH =  [('../'+lib ) for lib in libs] )
    env.Append( LIBS =  libs )
    env.Append( RPATH =  [ os.path.join( env['variantDir'], lib ) for lib in libs] )

AddMethod( Environment, AddLibs )

def AddEvent( env, remote, local ):
    env.Append( CPPPATH = os.path.join( remote, 'inc' ) )
    env.Append( LIBPATH =  '../'+local  )
    env.Append( LIBS = 'event' )
    env.Append( RPATH =  os.path.join( env['variantDir'], 'event' ) )

AddMethod( Environment, AddEvent )
