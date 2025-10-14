#ifndef _sun_java2d_DisposerTarget_h_
#define _sun_java2d_DisposerTarget_h_
//$ interface sun.java2d.DisposerTarget
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {

class DisposerTarget : public ::java::lang::Object {
	$interface(DisposerTarget, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getDisposerReferent() {return nullptr;}
};

	} // java2d
} // sun

#endif // _sun_java2d_DisposerTarget_h_