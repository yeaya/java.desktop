#ifndef _sun_java2d_d3d_D3DRenderQueue$1_h_
#define _sun_java2d_d3d_D3DRenderQueue$1_h_
//$ class sun.java2d.d3d.D3DRenderQueue$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DRenderQueue$1 : public ::java::lang::Runnable {
	$class(D3DRenderQueue$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	D3DRenderQueue$1();
	void init$();
	virtual void run() override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DRenderQueue$1_h_