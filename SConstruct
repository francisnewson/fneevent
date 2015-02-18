#Global environment
import os
import subprocess

#LIBRARY LOCATIONS
root_dir = ( '/afs/cern.ch/sw/lcg/app/releases/ROOT/5.34.14/'
        +'x86_64-slc6-gcc46-opt/root' )

boost_dir =  ( '/afs/cern.ch/sw/lcg/external/Boost/'
        +'1.50.0_python2.7/x86_64-slc6-gcc46-opt' )

boost_name = 'boost-1_50'

event_dir = '.'

env_default = Environment()

env = env_default.Clone()
env['variantDir'] = 'build_sprocess'

env.Append( CPPFLAGS = ['-O3'] )
env.SetBoost( boost_dir, boost_name)
env.SetRoot( root_dir )
env.SetClang()

print( "Defining build_sprocess")
print ( 'path is: {0}'.format( env['ENV']['PATH'] ) )
print ( 'ld_library_path is : {0}'.format( env['ENV']['LD_LIBRARY_PATH'] ) )

VariantDir(env['variantDir'], '.' )
SConscript( os.path.join( env['variantDir'], 'SConscript' ),
        exports = 'env')
Clean( ',', env['variantDir'] )

#--------------------------------------------------

env = env_default.Clone()


boost_dir =  ( '/afs/cern.ch/sw/lcg/external/Boost/'
        + '1.50.0_python2.7/i686-slc6-gcc47-opt' )

root_dir = ( '/afs/cern.ch/sw/lcg/app/releases/ROOT/5.34.17/'
        + 'i686-slc6-gcc47-opt/root' )

boost_name = 'boost-1_50'
env['variantDir'] = 'build_compact'

env.Append( CPPFLAGS = ['-O3'] )
env.SetBoost( boost_dir, boost_name)
env.SetGCC()
print ( 'ld_library_path is : {0}'.format( env['ENV']['LD_LIBRARY_PATH'] ) )
env.SetRoot( root_dir )
mygcc = subprocess.check_output(['which', 'g++']).rstrip()

print( "Defining build_compact")
print ( 'path is: {0}'.format( env['ENV']['PATH'] ) )
print ( 'gcc is : {0}'.format( mygcc ) )
print ( 'ld_library_path is : {0}'.format( env['ENV']['LD_LIBRARY_PATH'] ) )

VariantDir(env['variantDir'], '.' )
SConscript( os.path.join( env['variantDir'], 'SConscript' ),
        exports = 'env')
Clean( ',', env['variantDir'] )
