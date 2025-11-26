#ifndef _javax_swing_plaf_synth_SynthTabbedPaneUI_h_
#define _javax_swing_plaf_synth_SynthTabbedPaneUI_h_
//$ class javax.swing.plaf.synth.SynthTabbedPaneUI
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI
//$ implements java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Font;
		class FontMetrics;
		class Graphics;
		class Insets;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JButton;
		class JComponent;
		class JTabbedPane;
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
			namespace synth {
				class Region;
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthTabbedPaneUI : public ::javax::swing::plaf::basic::BasicTabbedPaneUI, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthTabbedPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthTabbedPaneUI();
	using ::javax::swing::plaf::basic::BasicTabbedPaneUI::getBaseline;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JTabbedPane* access$000(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$100(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static $ints* access$1000(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static int32_t access$1100(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$1200(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static $Array<::java::awt::Rectangle>* access$1300(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static $Array<::java::awt::Rectangle>* access$1400(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static $Array<::java::awt::Rectangle>* access$1500(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static $Array<::java::awt::Rectangle>* access$1600(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$200(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$300(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$400(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$500(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$600(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static ::javax::swing::JTabbedPane* access$700(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static int32_t access$800(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	static $ints* access$900(::javax::swing::plaf::synth::SynthTabbedPaneUI* x0);
	virtual int32_t calculateMaxTabHeight(int32_t tabPlacement) override;
	virtual int32_t calculateMaxTabWidth(int32_t tabPlacement) override;
	virtual int32_t calculateTabWidth(int32_t tabPlacement, int32_t tabIndex, ::java::awt::FontMetrics* metrics) override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	virtual ::java::awt::event::MouseListener* createMouseListener() override;
	virtual ::javax::swing::JButton* createScrollButton(int32_t direction) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	void ensureCurrentLayout();
	virtual int32_t getBaseline(int32_t tab) override;
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* subregion, int32_t state);
	virtual ::java::awt::FontMetrics* getFontMetrics() override;
	::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font);
	virtual ::java::awt::Insets* getTabInsets(int32_t tabPlacement, int32_t tabIndex) override;
	virtual int32_t getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) override;
	virtual int32_t getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	using ::javax::swing::plaf::basic::BasicTabbedPaneUI::layoutLabel;
	void layoutLabel(::javax::swing::plaf::synth::SynthContext* ss, int32_t tabPlacement, ::java::awt::FontMetrics* metrics, int32_t tabIndex, $String* title, ::javax::swing::Icon* icon, ::java::awt::Rectangle* tabRect, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool isSelected);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::plaf::basic::BasicTabbedPaneUI::paintContentBorder;
	void paintContentBorder(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex);
	using ::javax::swing::plaf::basic::BasicTabbedPaneUI::paintTab;
	void paintTab(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, int32_t tabPlacement, $Array<::java::awt::Rectangle>* rects, int32_t tabIndex, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect);
	virtual void paintTabArea(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex) override;
	void paintTabArea(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, ::java::awt::Rectangle* tabAreaBounds);
	using ::javax::swing::plaf::basic::BasicTabbedPaneUI::paintText;
	void paintText(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, int32_t tabPlacement, ::java::awt::Font* font, ::java::awt::FontMetrics* metrics, int32_t tabIndex, $String* title, ::java::awt::Rectangle* textRect, bool isSelected);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	bool scrollableTabLayoutEnabled();
	virtual void setRolloverTab(int32_t index) override;
	virtual $String* toString() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateStyle(::javax::swing::JTabbedPane* c);
	void updateTabContext(int32_t index, bool selected, bool isMouseDown, bool isMouseOver, bool hasFocus);
	int32_t tabOverlap = 0;
	bool extendTabsToBase = false;
	::javax::swing::plaf::synth::SynthContext* tabAreaContext = nullptr;
	::javax::swing::plaf::synth::SynthContext* tabContext = nullptr;
	::javax::swing::plaf::synth::SynthContext* tabContentContext = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::plaf::synth::SynthStyle* tabStyle = nullptr;
	::javax::swing::plaf::synth::SynthStyle* tabAreaStyle = nullptr;
	::javax::swing::plaf::synth::SynthStyle* tabContentStyle = nullptr;
	::java::awt::Rectangle* textRect = nullptr;
	::java::awt::Rectangle* iconRect = nullptr;
	::java::awt::Rectangle* tabAreaBounds = nullptr;
	bool tabAreaStatesMatchSelectedTab = false;
	bool nudgeSelectedLabel = false;
	bool selectedTabIsPressed = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTabbedPaneUI_h_