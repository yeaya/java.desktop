#ifndef _javax_swing_plaf_basic_BasicProgressBarUI_h_
#define _javax_swing_plaf_basic_BasicProgressBarUI_h_
//$ class javax.swing.plaf.basic.BasicProgressBarUI
//$ extends javax.swing.plaf.ProgressBarUI

#include <javax/swing/plaf/ProgressBarUI.h>

#pragma push_macro("ADJUSTTIMER")
#undef ADJUSTTIMER

namespace java {
	namespace awt {
		class Color;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
		class Insets;
		class Point;
		class Rectangle;
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
				class BasicProgressBarUI$Animator;
				class BasicProgressBarUI$Handler;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicProgressBarUI : public ::javax::swing::plaf::ProgressBarUI {
	$class(BasicProgressBarUI, 0, ::javax::swing::plaf::ProgressBarUI)
public:
	BasicProgressBarUI();
	void init$();
	void cleanUpIndeterminateValues();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual int32_t getAmountFull(::java::awt::Insets* b, int32_t width, int32_t height);
	virtual int32_t getAnimationIndex();
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Rectangle* getBox(::java::awt::Rectangle* r);
	virtual int32_t getBoxLength(int32_t availableLength, int32_t otherDimension);
	int32_t getCachedPercent();
	virtual int32_t getCellLength();
	virtual int32_t getCellSpacing();
	int32_t getCycleTime();
	int32_t getFrameCount();
	::java::awt::Rectangle* getGenericBox(::java::awt::Rectangle* r);
	::javax::swing::plaf::basic::BasicProgressBarUI$Handler* getHandler();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredInnerHorizontal();
	virtual ::java::awt::Dimension* getPreferredInnerVertical();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	int32_t getRepaintInterval();
	virtual ::java::awt::Color* getSelectionBackground();
	virtual ::java::awt::Color* getSelectionForeground();
	virtual ::java::awt::Point* getStringPlacement(::java::awt::Graphics* g, $String* progressString, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void incrementAnimationIndex();
	void initAnimationIndex();
	int32_t initCycleTime();
	void initIndeterminateDefaults();
	void initIndeterminateValues();
	int32_t initRepaintInterval();
	virtual void installDefaults();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintDeterminate(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintIndeterminate(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintString(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, int32_t amountFull, ::java::awt::Insets* b);
	void paintString(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, int32_t fillStart, int32_t amountFull, ::java::awt::Insets* b);
	virtual void setAnimationIndex(int32_t newValue);
	void setCachedPercent(int32_t cachedPercent);
	virtual void setCellLength(int32_t cellLen);
	virtual void setCellSpacing(int32_t cellSpace);
	bool sizeChanged();
	virtual void startAnimationTimer();
	virtual void stopAnimationTimer();
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateSizes();
	int32_t cachedPercent = 0;
	int32_t cellLength = 0;
	int32_t cellSpacing = 0;
	::java::awt::Color* selectionForeground = nullptr;
	::java::awt::Color* selectionBackground = nullptr;
	::javax::swing::plaf::basic::BasicProgressBarUI$Animator* animator = nullptr;
	::javax::swing::JProgressBar* progressBar = nullptr;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::javax::swing::plaf::basic::BasicProgressBarUI$Handler* handler = nullptr;
	int32_t animationIndex = 0;
	int32_t numFrames = 0;
	int32_t repaintInterval = 0;
	int32_t cycleTime = 0;
	static bool ADJUSTTIMER;
	::java::awt::Rectangle* boxRect = nullptr;
	::java::awt::Rectangle* nextPaintRect = nullptr;
	::java::awt::Rectangle* componentInnards = nullptr;
	::java::awt::Rectangle* oldComponentInnards = nullptr;
	double delta = 0.0;
	int32_t maxPosition = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ADJUSTTIMER")

#endif // _javax_swing_plaf_basic_BasicProgressBarUI_h_