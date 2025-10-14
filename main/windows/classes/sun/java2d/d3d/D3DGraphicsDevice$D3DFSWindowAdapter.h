#ifndef _sun_java2d_d3d_D3DGraphicsDevice$D3DFSWindowAdapter_h_
#define _sun_java2d_d3d_D3DGraphicsDevice$D3DFSWindowAdapter_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice$D3DFSWindowAdapter
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsDevice$D3DFSWindowAdapter : public ::java::awt::event::WindowAdapter {
	$class(D3DGraphicsDevice$D3DFSWindowAdapter, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	D3DGraphicsDevice$D3DFSWindowAdapter();
	void init$();
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice$D3DFSWindowAdapter_h_