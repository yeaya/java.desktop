#ifndef _javax_swing_JViewport_h_
#define _javax_swing_JViewport_h_
//$ class javax.swing.JViewport
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("BACKINGSTORE_SCROLL_MODE")
#undef BACKINGSTORE_SCROLL_MODE
#pragma push_macro("BLIT_SCROLL_MODE")
#undef BLIT_SCROLL_MODE
#pragma push_macro("SIMPLE_SCROLL_MODE")
#undef SIMPLE_SCROLL_MODE

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Image;
		class Insets;
		class LayoutManager;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentListener;
		}
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JViewport$ViewListener;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class ViewportUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JViewport : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JViewport, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JViewport();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void addImpl(::java::awt::Component* child, Object$* constraints, int32_t index) override;
	void blitDoubleBuffered(::javax::swing::JComponent* view, ::java::awt::Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH, int32_t blitFromX, int32_t blitFromY, int32_t blitToX, int32_t blitToY, int32_t blitW, int32_t blitH);
	bool canUseWindowBlitter();
	virtual bool computeBlit(int32_t dx, int32_t dy, ::java::awt::Point* blitFrom, ::java::awt::Point* blitTo, ::java::awt::Dimension* blitSize, ::java::awt::Rectangle* blitPaint);
	virtual ::java::awt::LayoutManager* createLayoutManager();
	::javax::swing::Timer* createRepaintTimer();
	::java::awt::Image* createScaledImage(int32_t width, int32_t height, int32_t scaledWidth, int32_t scaledHeight);
	virtual ::javax::swing::JViewport$ViewListener* createViewListener();
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) override;
	virtual void fireStateChanged();
	void flushViewDirtyRegion(::java::awt::Graphics* g, ::java::awt::Rectangle* dirty);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	::java::awt::Graphics* getBackingStoreGraphics(::java::awt::Graphics* g);
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual ::java::awt::Dimension* getExtentSize();
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Insets* getInsets(::java::awt::Insets* insets) override;
	virtual int32_t getScrollMode();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual ::java::awt::Component* getView();
	::java::awt::Point* getViewLocation();
	virtual ::java::awt::Point* getViewPosition();
	virtual ::java::awt::Rectangle* getViewRect();
	virtual ::java::awt::Dimension* getViewSize();
	virtual bool isBackingStoreEnabled();
	bool isBlitting();
	bool isFPScale();
	virtual bool isOptimizedDrawingEnabled() override;
	virtual bool isPaintingOrigin() override;
	bool needsRepaintAfterBlit();
	virtual void paint(::java::awt::Graphics* g) override;
	void paintViaBackingStore(::java::awt::Graphics* g);
	void paintViaBackingStore(::java::awt::Graphics* g, ::java::awt::Rectangle* oClip);
	void paintView(::java::awt::Graphics* g);
	virtual $String* paramString() override;
	int32_t positionAdjustment(int32_t parentWidth, int32_t childWidth, int32_t childAt);
	using ::javax::swing::JComponent::remove;
	virtual void remove(::java::awt::Component* child) override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	using ::javax::swing::JComponent::repaint;
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	virtual void reshape(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void scrollRectToVisible(::java::awt::Rectangle* contentRect) override;
	virtual void setBackingStoreEnabled(bool enabled);
	virtual void setBorder(::javax::swing::border::Border* border) override;
	virtual void setExtentSize(::java::awt::Dimension* newExtent);
	virtual void setScrollMode(int32_t mode);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ViewportUI* ui);
	virtual void setView(::java::awt::Component* view);
	virtual void setViewPosition(::java::awt::Point* p);
	virtual void setViewSize(::java::awt::Dimension* newSize);
	virtual $String* toString() override;
	virtual ::java::awt::Dimension* toViewCoordinates(::java::awt::Dimension* size);
	virtual ::java::awt::Point* toViewCoordinates(::java::awt::Point* p);
	virtual void updateUI() override;
	void validateView();
	bool windowBlitPaint(::java::awt::Graphics* g);
	static $String* uiClassID;
	static $Object* EnableWindowBlit;
	bool isViewSizeSet = false;
	::java::awt::Point* lastPaintPosition = nullptr;
	bool backingStore = false;
	::java::awt::Image* backingStoreImage = nullptr;
	bool scrollUnderway = false;
	::java::awt::event::ComponentListener* viewListener = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	static const int32_t BLIT_SCROLL_MODE = 1;
	static const int32_t BACKINGSTORE_SCROLL_MODE = 2;
	static const int32_t SIMPLE_SCROLL_MODE = 0;
	int32_t scrollMode = 0;
	bool repaintAll = false;
	bool waitingForRepaint = false;
	::javax::swing::Timer* repaintTimer = nullptr;
	bool inBlitPaint = false;
	bool hasHadValidView = false;
	bool viewChanged = false;
};

	} // swing
} // javax

#pragma pop_macro("BACKINGSTORE_SCROLL_MODE")
#pragma pop_macro("BLIT_SCROLL_MODE")
#pragma pop_macro("SIMPLE_SCROLL_MODE")

#endif // _javax_swing_JViewport_h_