import os
Import('env')
Import('*')

lenv = env.Clone()

lenv.Append( CPPPATH = 'inc/') 
lenv.Append( CPPPATH = '#' )

cint_builder = Builder( action = 
    os.path.join( lenv['ROOTPATH'], 'bin', 'rootcint' )+ ' -f $TARGET -c -p $SOURCES' )
lenv.Append( BUILDERS = { 'Dict' : cint_builder } )

target_sources = [ Glob('src/*.cpp' )  ]
target_sources.append( ['root/eventdict.cpp'] )

dict_headers = [ Glob('inc/*.hh') ]
dict_headers.append( 'LinkDef.h'  )

lenv.Append( CPPFLAGS = '-Wno-error=ignored-qualifiers' )
lenv.Dict( target = ['root/eventdict.cpp', 'root/eventdict.h'],
        source = dict_headers )

lenv.SharedLibrary( target = 'event', source = target_sources )
