#ifndef _sun_swing_JLightweightFrame_h_
#define _sun_swing_JLightweightFrame_h_
//$ class sun.swing.JLightweightFrame
//$ extends sun.awt.LightweightFrame
//$ implements javax.swing.RootPaneContainer

#include <java/lang/Array.h>
#include <javax/swing/RootPaneContainer.h>
#include <sun/awt/LightweightFrame.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
			class DragGestureListener;
			class DragGestureRecognizer;
			class DragSource;
			class DropTarget;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DragSourceContextPeer;
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JLayeredPane;
		class JPanel;
		class JRootPane;
	}
}
namespace sun {
	namespace swing {
		class LightweightContent;
		class SwingUtilities2$RepaintListener;
	}
}

namespace sun {
	namespace swing {

class $export JLightweightFrame : public ::sun::awt::LightweightFrame, public ::javax::swing::RootPaneContainer {
	$class(JLightweightFrame, 0, ::sun::awt::LightweightFrame, ::javax::swing::RootPaneContainer)
public:
	JLightweightFrame();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::LightweightFrame::isFocusCycleRoot;
	using ::sun::awt::LightweightFrame::add;
	using ::sun::awt::LightweightFrame::getMousePosition;
	using ::sun::awt::LightweightFrame::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void addNotify() override;
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl) override;
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge) override;
	virtual void dispose() override;
	virtual ::java::awt::Container* getContentPane() override;
	virtual ::java::awt::Component* getGlassPane() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::javax::swing::JLayeredPane* getLayeredPane() override;
	virtual ::javax::swing::JRootPane* getRootPane() override;
	virtual int32_t getScaleFactor() override;
	virtual double getScaleFactorX() override;
	virtual double getScaleFactorY() override;
	virtual void grabFocus() override;
	void initInterior();
	void lambda$new$0(::javax::swing::JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void notifyDisplayChanged(int32_t scaleFactor) override;
	virtual void notifyDisplayChanged(double scaleFactorX, double scaleFactorY) override;
	void notifyImageUpdated(int32_t x, int32_t y, int32_t width, int32_t height);
	void overrideNativeWindowHandle(int64_t handle, ::java::lang::Runnable* closeWindow);
	using ::sun::awt::LightweightFrame::remove;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	void resizeBuffer(int32_t width, int32_t height, double newScaleFactorX, double newScaleFactorY);
	void setContent(::sun::swing::LightweightContent* content);
	virtual void setContentPane(::java::awt::Container* contentPane) override;
	using ::sun::awt::LightweightFrame::setCursor;
	virtual void setGlassPane(::java::awt::Component* glassPane) override;
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layeredPane) override;
	using ::sun::awt::LightweightFrame::show;
	void syncCopyBuffer(bool reset, int32_t x, int32_t y, int32_t w, int32_t h, double scaleX, double scaleY);
	virtual $String* toString() override;
	virtual void ungrabFocus() override;
	void updateClientCursor();
	::javax::swing::JRootPane* rootPane = nullptr;
	::sun::swing::LightweightContent* content = nullptr;
	::java::awt::Component* component = nullptr;
	::javax::swing::JPanel* contentPane = nullptr;
	::java::awt::image::BufferedImage* bbImage = nullptr;
	$volatile(double) scaleFactorX = 0.0;
	$volatile(double) scaleFactorY = 0.0;
	static bool copyBufferEnabled;
	$ints* copyBuffer = nullptr;
	::java::beans::PropertyChangeListener* layoutSizeListener = nullptr;
	::sun::swing::SwingUtilities2$RepaintListener* repaintListener = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_JLightweightFrame_h_