#ifndef _com_apple_laf_AquaProgressBarUI_h_
#define _com_apple_laf_AquaProgressBarUI_h_
//$ class com.apple.laf.AquaProgressBarUI
//$ extends javax.swing.plaf.ProgressBarUI
//$ implements javax.swing.event.ChangeListener,java.beans.PropertyChangeListener,javax.swing.event.AncestorListener,com.apple.laf.AquaUtilControlSize$Sizeable

#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ProgressBarUI.h>

#pragma push_macro("ADJUSTTIMER")
#undef ADJUSTTIMER

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaProgressBarUI$Animator;
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class FontMetrics;
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JProgressBar;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorEvent;
			class ChangeEvent;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaProgressBarUI : public ::javax::swing::plaf::ProgressBarUI, public ::javax::swing::event::ChangeListener, public ::java::beans::PropertyChangeListener, public ::javax::swing::event::AncestorListener, public ::com::apple::laf::AquaUtilControlSize$Sizeable {
	$class(AquaProgressBarUI, 0, ::javax::swing::plaf::ProgressBarUI, ::javax::swing::event::ChangeListener, ::java::beans::PropertyChangeListener, ::javax::swing::event::AncestorListener, ::com::apple::laf::AquaUtilControlSize$Sizeable)
public:
	AquaProgressBarUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void ancestorAdded(::javax::swing::event::AncestorEvent* e) override;
	virtual void ancestorMoved(::javax::swing::event::AncestorEvent* e) override;
	virtual void ancestorRemoved(::javax::swing::event::AncestorEvent* e) override;
	virtual void applySizeFor(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* size) override;
	static double checkValue(double value);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	static ::java::awt::Dimension* getCircularPreferredSize();
	virtual int32_t getMaxProgressBarHeight();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredHorizontalSize(::java::awt::FontMetrics* metrics);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredVerticalSize(::java::awt::FontMetrics* metrics);
	virtual ::java::awt::Rectangle* getRepaintRect();
	static ::com::apple::laf::AquaUtilControlSize$SizeDescriptor* getSizeDescriptor();
	virtual ::apple::laf::JRSUIConstants$State* getState(::javax::swing::JComponent* c);
	virtual ::java::awt::Point* getStringPlacement(::java::awt::Graphics* g, $String* progressString, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void installDefaults();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isHorizontal();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g);
	virtual void paintString(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void repaint();
	virtual void revalidateAnimationTimers();
	virtual void startAnimationTimer();
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual void stopAnimationTimer();
	virtual $String* toString() override;
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static const bool ADJUSTTIMER = true;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* sizeDescriptor;
	::apple::laf::JRSUIConstants$Size* sizeVariant = nullptr;
	::java::awt::Color* selectionForeground = nullptr;
	::com::apple::laf::AquaProgressBarUI$Animator* animator = nullptr;
	bool isAnimating = false;
	bool isCircular = false;
	::com::apple::laf::AquaPainter* painter = nullptr;
	::javax::swing::JProgressBar* progressBar = nullptr;
	::java::awt::Rectangle* fUpdateArea = nullptr;
	::java::awt::Dimension* fLastSize = nullptr;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("ADJUSTTIMER")

#endif // _com_apple_laf_AquaProgressBarUI_h_