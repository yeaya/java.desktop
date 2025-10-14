#ifndef _javax_swing_BufferStrategyPaintManager$BufferInfo_h_
#define _javax_swing_BufferStrategyPaintManager$BufferInfo_h_
//$ class javax.swing.BufferStrategyPaintManager$BufferInfo
//$ extends java.awt.event.ComponentAdapter
//$ implements java.awt.event.WindowListener

#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/WindowListener.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class WindowEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class BufferStrategyPaintManager;
	}
}

namespace javax {
	namespace swing {

class BufferStrategyPaintManager$BufferInfo : public ::java::awt::event::ComponentAdapter, public ::java::awt::event::WindowListener {
	$class(BufferStrategyPaintManager$BufferInfo, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter, ::java::awt::event::WindowListener)
public:
	BufferStrategyPaintManager$BufferInfo();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::BufferStrategyPaintManager* this$0, ::java::awt::Container* root);
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	::java::awt::image::BufferStrategy* createBufferStrategy();
	::java::awt::image::BufferStrategy* createBufferStrategy(::java::awt::Container* root, bool isVsynced);
	virtual void dispose();
	virtual ::java::awt::image::BufferStrategy* getBufferStrategy(bool create);
	virtual bool getContentsLostDuringExpose();
	virtual bool getPaintAllOnExpose();
	virtual ::java::awt::Container* getRoot();
	virtual bool hasBufferStrategyChanged();
	virtual bool isInSync();
	virtual void setContentsLostDuringExpose(bool value);
	virtual void setInSync(bool inSync);
	virtual void setPaintAllOnExpose(bool paintAllOnExpose);
	virtual $String* toString() override;
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosed(::java::awt::event::WindowEvent* e) override;
	virtual void windowClosing(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	::javax::swing::BufferStrategyPaintManager* this$0 = nullptr;
	::java::lang::ref::WeakReference* weakBS = nullptr;
	::java::lang::ref::WeakReference* root = nullptr;
	bool inSync = false;
	bool contentsLostDuringExpose = false;
	bool paintAllOnExpose = false;
};

	} // swing
} // javax

#endif // _javax_swing_BufferStrategyPaintManager$BufferInfo_h_