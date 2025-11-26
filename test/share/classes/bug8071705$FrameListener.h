#ifndef _bug8071705$FrameListener_h_
#define _bug8071705$FrameListener_h_
//$ class bug8071705$FrameListener
//$ extends java.awt.event.ComponentAdapter

#include <java/awt/event/ComponentAdapter.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class bug8071705$FrameListener : public ::java::awt::event::ComponentAdapter {
	$class(bug8071705$FrameListener, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter)
public:
	bug8071705$FrameListener();
	void init$(::java::awt::GraphicsDevice* device, ::java::util::concurrent::CountDownLatch* latch, $booleans* result);
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	::java::awt::GraphicsDevice* device = nullptr;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	$booleans* result = nullptr;
};

#endif // _bug8071705$FrameListener_h_