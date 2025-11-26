#ifndef _javax_swing_plaf_basic_BasicSliderUI_h_
#define _javax_swing_plaf_basic_BasicSliderUI_h_
//$ class javax.swing.plaf.basic.BasicSliderUI
//$ extends javax.swing.plaf.SliderUI

#include <javax/swing/plaf/SliderUI.h>

#pragma push_macro("MAX_SCROLL")
#undef MAX_SCROLL
#pragma push_macro("MIN_SCROLL")
#undef MIN_SCROLL
#pragma push_macro("NEGATIVE_SCROLL")
#undef NEGATIVE_SCROLL
#pragma push_macro("POSITIVE_SCROLL")
#undef POSITIVE_SCROLL
#pragma push_macro("SHARED_ACTION")
#undef SHARED_ACTION

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentListener;
			class FocusListener;
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
		class Integer;
	}
}
namespace javax {
	namespace swing {
		class InputMap;
		class JComponent;
		class JSlider;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
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
				class BasicSliderUI$Actions;
				class BasicSliderUI$Handler;
				class BasicSliderUI$ScrollListener;
				class BasicSliderUI$TrackListener;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSliderUI : public ::javax::swing::plaf::SliderUI {
	$class(BasicSliderUI, 0, ::javax::swing::plaf::SliderUI)
public:
	BasicSliderUI();
	void init$();
	void init$(::javax::swing::JSlider* b);
	virtual void calculateContentRect();
	virtual void calculateFocusRect();
	virtual void calculateGeometry();
	virtual void calculateLabelRect();
	virtual void calculateThumbLocation();
	virtual void calculateThumbSize();
	virtual void calculateTickRect();
	virtual void calculateTrackBuffer();
	virtual void calculateTrackRect();
	virtual ::javax::swing::event::ChangeListener* createChangeListener(::javax::swing::JSlider* slider);
	virtual ::java::awt::event::ComponentListener* createComponentListener(::javax::swing::JSlider* slider);
	virtual ::java::awt::event::FocusListener* createFocusListener(::javax::swing::JSlider* slider);
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JSlider* slider);
	virtual ::javax::swing::plaf::basic::BasicSliderUI$ScrollListener* createScrollListener(::javax::swing::JSlider* slider);
	virtual ::javax::swing::plaf::basic::BasicSliderUI$TrackListener* createTrackListener(::javax::swing::JSlider* slider);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual bool drawInverted();
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Color* getFocusColor();
	::javax::swing::plaf::basic::BasicSliderUI$Handler* getHandler();
	virtual int32_t getHeightOfHighValueLabel();
	virtual int32_t getHeightOfLowValueLabel();
	virtual int32_t getHeightOfTallestLabel();
	virtual ::java::lang::Integer* getHighestValue();
	virtual ::java::awt::Component* getHighestValueLabel();
	virtual ::java::awt::Color* getHighlightColor();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition, ::javax::swing::JSlider* slider);
	virtual ::java::lang::Integer* getLowestValue();
	virtual ::java::awt::Component* getLowestValueLabel();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumHorizontalSize();
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumVerticalSize();
	virtual ::java::awt::Dimension* getPreferredHorizontalSize();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredVerticalSize();
	virtual ::java::awt::Color* getShadowColor();
	virtual ::java::awt::Dimension* getThumbSize();
	virtual int32_t getTickLength();
	int32_t getTickSpacing();
	virtual int32_t getWidthOfHighValueLabel();
	virtual int32_t getWidthOfLowValueLabel();
	virtual int32_t getWidthOfWidestLabel();
	virtual void installDefaults(::javax::swing::JSlider* slider);
	virtual void installKeyboardActions(::javax::swing::JSlider* slider);
	virtual void installListeners(::javax::swing::JSlider* slider);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isDragging();
	virtual bool labelsHaveSameBaselines();
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintFocus(::java::awt::Graphics* g);
	virtual void paintHorizontalLabel(::java::awt::Graphics* g, int32_t value, ::java::awt::Component* label);
	virtual void paintLabels(::java::awt::Graphics* g);
	virtual void paintMajorTickForHorizSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t x);
	virtual void paintMajorTickForVertSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t y);
	virtual void paintMinorTickForHorizSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t x);
	virtual void paintMinorTickForVertSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t y);
	virtual void paintThumb(::java::awt::Graphics* g);
	virtual void paintTicks(::java::awt::Graphics* g);
	virtual void paintTrack(::java::awt::Graphics* g);
	virtual void paintVerticalLabel(::java::awt::Graphics* g, int32_t value, ::java::awt::Component* label);
	virtual void recalculateIfInsetsChanged();
	virtual void recalculateIfOrientationChanged();
	virtual void scrollByBlock(int32_t direction);
	virtual void scrollByUnit(int32_t direction);
	virtual void scrollDueToClickInTrack(int32_t dir);
	virtual void setThumbLocation(int32_t x, int32_t y);
	virtual void uninstallDefaults(::javax::swing::JSlider* slider);
	virtual void uninstallKeyboardActions(::javax::swing::JSlider* slider);
	virtual void uninstallListeners(::javax::swing::JSlider* slider);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual int32_t valueForXPosition(int32_t xPos);
	virtual int32_t valueForYPosition(int32_t yPos);
	virtual int32_t xPositionForValue(int32_t value);
	virtual int32_t yPositionForValue(int32_t value);
	virtual int32_t yPositionForValue(int32_t value, int32_t trackY, int32_t trackHeight);
	static ::javax::swing::plaf::basic::BasicSliderUI$Actions* SHARED_ACTION;
	static const int32_t POSITIVE_SCROLL = +1;
	static const int32_t NEGATIVE_SCROLL = (-1);
	static const int32_t MIN_SCROLL = (-2);
	static const int32_t MAX_SCROLL = +2;
	::javax::swing::Timer* scrollTimer = nullptr;
	::javax::swing::JSlider* slider = nullptr;
	::java::awt::Insets* focusInsets = nullptr;
	::java::awt::Insets* insetCache = nullptr;
	bool leftToRightCache = false;
	::java::awt::Rectangle* focusRect = nullptr;
	::java::awt::Rectangle* contentRect = nullptr;
	::java::awt::Rectangle* labelRect = nullptr;
	::java::awt::Rectangle* tickRect = nullptr;
	::java::awt::Rectangle* trackRect = nullptr;
	::java::awt::Rectangle* thumbRect = nullptr;
	int32_t trackBuffer = 0;
	bool isDragging$ = false;
	::javax::swing::plaf::basic::BasicSliderUI$TrackListener* trackListener = nullptr;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::java::awt::event::ComponentListener* componentListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::javax::swing::plaf::basic::BasicSliderUI$ScrollListener* scrollListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicSliderUI$Handler* handler = nullptr;
	int32_t lastValue = 0;
	::java::awt::Color* shadowColor = nullptr;
	::java::awt::Color* highlightColor = nullptr;
	::java::awt::Color* focusColor = nullptr;
	bool checkedLabelBaselines = false;
	bool sameLabelBaselines = false;
	static ::java::awt::Rectangle* unionRect;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("MAX_SCROLL")
#pragma pop_macro("MIN_SCROLL")
#pragma pop_macro("NEGATIVE_SCROLL")
#pragma pop_macro("POSITIVE_SCROLL")
#pragma pop_macro("SHARED_ACTION")

#endif // _javax_swing_plaf_basic_BasicSliderUI_h_