#ifndef _sun_java2d_DisposerRecord_h_
#define _sun_java2d_DisposerRecord_h_
//$ interface sun.java2d.DisposerRecord
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {

class $import DisposerRecord : public ::java::lang::Object {
	$interface(DisposerRecord, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dispose() {}
};

	} // java2d
} // sun

#endif // _sun_java2d_DisposerRecord_h_