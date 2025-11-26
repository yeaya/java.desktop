#ifndef _javax_swing_ToolTipManager_h_
#define _javax_swing_ToolTipManager_h_
//$ class javax.swing.ToolTipManager
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

#pragma push_macro("TOOL_TIP_MANAGER_KEY")
#undef TOOL_TIP_MANAGER_KEY

namespace java {
	namespace awt {
		class Component;
		class Frame;
		class GraphicsConfiguration;
		class Point;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class KeyListener;
			class MouseEvent;
			class MouseMotionListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JToolTip;
		class KeyStroke;
		class Popup;
		class Timer;
	}
}

namespace javax {
	namespace swing {

class $export ToolTipManager : public ::java::awt::event::MouseAdapter {
	$class(ToolTipManager, 0, ::java::awt::event::MouseAdapter)
public:
	ToolTipManager();
	void init$();
	void checkForTipChange(::java::awt::event::MouseEvent* event);
	::java::awt::event::FocusListener* createFocusChangeListener();
	static ::java::awt::Frame* frameForComponent(::java::awt::Component* component);
	virtual int32_t getDismissDelay();
	::java::awt::GraphicsConfiguration* getDrawingGC(::java::awt::Point* toFind);
	int32_t getHeightAdjust(::java::awt::Rectangle* a, ::java::awt::Rectangle* b);
	virtual int32_t getInitialDelay();
	int32_t getPopupFitHeight(::java::awt::Rectangle* popupRectInScreen, ::java::awt::Component* invoker);
	int32_t getPopupFitWidth(::java::awt::Rectangle* popupRectInScreen, ::java::awt::Component* invoker);
	virtual int32_t getReshowDelay();
	int32_t getWidthAdjust(::java::awt::Rectangle* a, ::java::awt::Rectangle* b);
	void hide(::javax::swing::JComponent* source);
	virtual void hideTipWindow();
	void initiateToolTip(::java::awt::event::MouseEvent* event);
	virtual bool isEnabled();
	virtual bool isLightWeightPopupEnabled();
	virtual void mouseDragged(::java::awt::event::MouseEvent* event) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* event) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* event) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* event) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* event) override;
	virtual void registerComponent(::javax::swing::JComponent* component);
	virtual void setDismissDelay(int32_t milliseconds);
	virtual void setEnabled(bool flag);
	virtual void setInitialDelay(int32_t milliseconds);
	virtual void setLightWeightPopupEnabled(bool aFlag);
	virtual void setReshowDelay(int32_t milliseconds);
	static ::javax::swing::ToolTipManager* sharedInstance();
	void show(::javax::swing::JComponent* source);
	virtual void showTipWindow();
	virtual void unregisterComponent(::javax::swing::JComponent* component);
	::javax::swing::Timer* enterTimer = nullptr;
	::javax::swing::Timer* exitTimer = nullptr;
	::javax::swing::Timer* insideTimer = nullptr;
	$String* toolTipText = nullptr;
	::java::awt::Point* preferredLocation = nullptr;
	::javax::swing::JComponent* insideComponent = nullptr;
	::java::awt::event::MouseEvent* mouseEvent = nullptr;
	bool showImmediately = false;
	static $Object* TOOL_TIP_MANAGER_KEY;
	::javax::swing::Popup* tipWindow = nullptr;
	::java::awt::Window* window = nullptr;
	::javax::swing::JToolTip* tip = nullptr;
	::java::awt::Rectangle* popupRect = nullptr;
	::java::awt::Rectangle* popupFrameRect = nullptr;
	bool enabled = false;
	bool tipShowing = false;
	::java::awt::event::FocusListener* focusChangeListener = nullptr;
	::java::awt::event::MouseMotionListener* moveBeforeEnterListener = nullptr;
	::java::awt::event::KeyListener* accessibilityKeyListener = nullptr;
	::javax::swing::KeyStroke* postTip = nullptr;
	::javax::swing::KeyStroke* hideTip = nullptr;
	bool lightWeightPopupEnabled = false;
	bool heavyWeightPopupEnabled = false;
};

	} // swing
} // javax

#pragma pop_macro("TOOL_TIP_MANAGER_KEY")

#endif // _javax_swing_ToolTipManager_h_