#ifndef _sun_java2d_ReentrantContextProvider$HardReference_h_
#define _sun_java2d_ReentrantContextProvider$HardReference_h_
//$ class sun.java2d.ReentrantContextProvider$HardReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace sun {
	namespace java2d {

class ReentrantContextProvider$HardReference : public ::java::lang::ref::WeakReference {
	$class(ReentrantContextProvider$HardReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ReentrantContextProvider$HardReference();
	void init$(Object$* referent);
	virtual $Object* get() override;
	$Object* strongRef = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_ReentrantContextProvider$HardReference_h_