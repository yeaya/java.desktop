#ifndef _javax_swing_plaf_basic_BasicScrollBarUI_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI
//$ extends javax.swing.plaf.ScrollBarUI
//$ implements java.awt.LayoutManager,javax.swing.SwingConstants

#include <java/awt/LayoutManager.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ScrollBarUI.h>

#pragma push_macro("DECREASE_HIGHLIGHT")
#undef DECREASE_HIGHLIGHT
#pragma push_macro("INCREASE_HIGHLIGHT")
#undef INCREASE_HIGHLIGHT
#pragma push_macro("MAX_SCROLL")
#undef MAX_SCROLL
#pragma push_macro("MIN_SCROLL")
#undef MIN_SCROLL
#pragma push_macro("NEGATIVE_SCROLL")
#undef NEGATIVE_SCROLL
#pragma push_macro("NO_HIGHLIGHT")
#undef NO_HIGHLIGHT
#pragma push_macro("POSITIVE_SCROLL")
#undef POSITIVE_SCROLL

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class InputMap;
		class JButton;
		class JComponent;
		class JScrollBar;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicScrollBarUI$ArrowButtonListener;
				class BasicScrollBarUI$Handler;
				class BasicScrollBarUI$ModelListener;
				class BasicScrollBarUI$ScrollListener;
				class BasicScrollBarUI$TrackListener;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicScrollBarUI : public ::javax::swing::plaf::ScrollBarUI, public ::java::awt::LayoutManager, public ::javax::swing::SwingConstants {
	$class(BasicScrollBarUI, 0, ::javax::swing::plaf::ScrollBarUI, ::java::awt::LayoutManager, ::javax::swing::SwingConstants)
public:
	BasicScrollBarUI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addLayoutComponent($String* name, ::java::awt::Component* child) override;
	virtual void configureScrollBarColors();
	virtual ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener* createArrowButtonListener();
	virtual ::javax::swing::JButton* createDecreaseButton(int32_t orientation);
	virtual ::javax::swing::JButton* createIncreaseButton(int32_t orientation);
	virtual ::javax::swing::plaf::basic::BasicScrollBarUI$ModelListener* createModelListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::javax::swing::plaf::basic::BasicScrollBarUI$ScrollListener* createScrollListener();
	virtual ::javax::swing::plaf::basic::BasicScrollBarUI$TrackListener* createTrackListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::javax::swing::plaf::basic::BasicScrollBarUI$Handler* getHandler();
	::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMaximumThumbSize();
	virtual ::java::awt::Dimension* getMinimumThumbSize();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual bool getSupportsAbsolutePositioning();
	virtual ::java::awt::Rectangle* getThumbBounds();
	virtual ::java::awt::Rectangle* getTrackBounds();
	int32_t getValue(::javax::swing::JScrollBar* sb);
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	bool isMouseAfterThumb();
	bool isMouseBeforeThumb();
	bool isMouseLeftOfThumb();
	bool isMouseRightOfThumb();
	virtual bool isThumbRollover();
	virtual void layoutContainer(::java::awt::Container* scrollbarContainer) override;
	virtual void layoutHScrollbar(::javax::swing::JScrollBar* sb);
	virtual void layoutVScrollbar(::javax::swing::JScrollBar* sb);
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* scrollbarContainer) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintDecreaseHighlight(::java::awt::Graphics* g);
	virtual void paintIncreaseHighlight(::java::awt::Graphics* g);
	virtual void paintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* thumbBounds);
	virtual void paintTrack(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* trackBounds);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* scrollbarContainer) override;
	virtual void removeLayoutComponent(::java::awt::Component* child) override;
	static void scrollByBlock(::javax::swing::JScrollBar* scrollbar, int32_t direction);
	virtual void scrollByBlock(int32_t direction);
	virtual void scrollByUnit(int32_t direction);
	static void scrollByUnits(::javax::swing::JScrollBar* scrollbar, int32_t direction, int32_t units, bool limitToBlock);
	void setDragging(bool dragging);
	virtual void setThumbBounds(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setThumbRollover(bool active);
	virtual $String* toString() override;
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateButtonDirections();
	void updateThumbState(int32_t x, int32_t y);
	static bool $assertionsDisabled;
	static const int32_t POSITIVE_SCROLL = 1;
	static const int32_t NEGATIVE_SCROLL = (-1);
	static const int32_t MIN_SCROLL = 2;
	static const int32_t MAX_SCROLL = 3;
	::java::awt::Dimension* minimumThumbSize = nullptr;
	::java::awt::Dimension* maximumThumbSize = nullptr;
	::java::awt::Color* thumbHighlightColor = nullptr;
	::java::awt::Color* thumbLightShadowColor = nullptr;
	::java::awt::Color* thumbDarkShadowColor = nullptr;
	::java::awt::Color* thumbColor = nullptr;
	::java::awt::Color* trackColor = nullptr;
	::java::awt::Color* trackHighlightColor = nullptr;
	::javax::swing::JScrollBar* scrollbar = nullptr;
	::javax::swing::JButton* incrButton = nullptr;
	::javax::swing::JButton* decrButton = nullptr;
	bool isDragging = false;
	::javax::swing::plaf::basic::BasicScrollBarUI$TrackListener* trackListener = nullptr;
	::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener* buttonListener = nullptr;
	::javax::swing::plaf::basic::BasicScrollBarUI$ModelListener* modelListener = nullptr;
	::java::awt::Rectangle* thumbRect = nullptr;
	::java::awt::Rectangle* trackRect = nullptr;
	int32_t trackHighlight = 0;
	static const int32_t NO_HIGHLIGHT = 0;
	static const int32_t DECREASE_HIGHLIGHT = 1;
	static const int32_t INCREASE_HIGHLIGHT = 2;
	::javax::swing::plaf::basic::BasicScrollBarUI$ScrollListener* scrollListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::Timer* scrollTimer = nullptr;
	static const int32_t scrollSpeedThrottle = 60;
	bool supportsAbsolutePositioning = false;
	int32_t scrollBarWidth = 0;
	::javax::swing::plaf::basic::BasicScrollBarUI$Handler* handler = nullptr;
	bool thumbActive = false;
	bool useCachedValue = false;
	int32_t scrollBarValue = 0;
	int32_t incrGap = 0;
	int32_t decrGap = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DECREASE_HIGHLIGHT")
#pragma pop_macro("INCREASE_HIGHLIGHT")
#pragma pop_macro("MAX_SCROLL")
#pragma pop_macro("MIN_SCROLL")
#pragma pop_macro("NEGATIVE_SCROLL")
#pragma pop_macro("NO_HIGHLIGHT")
#pragma pop_macro("POSITIVE_SCROLL")

#endif // _javax_swing_plaf_basic_BasicScrollBarUI_h_