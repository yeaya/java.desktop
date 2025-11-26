#ifndef _javax_swing_plaf_multi_MultiTextUI_h_
#define _javax_swing_plaf_multi_MultiTextUI_h_
//$ class javax.swing.plaf.multi.MultiTextUI
//$ extends javax.swing.plaf.TextUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/TextUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
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
		namespace text {
			class EditorKit;
			class JTextComponent;
			class Position$Bias;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

class $import MultiTextUI : public ::javax::swing::plaf::TextUI {
	$class(MultiTextUI, $NO_CLASS_INIT, ::javax::swing::plaf::TextUI)
public:
	MultiTextUI();
	void init$();
	virtual bool contains(::javax::swing::JComponent* a, int32_t b, int32_t c) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* a);
	virtual void damageRange(::javax::swing::text::JTextComponent* a, int32_t b, int32_t c) override;
	virtual void damageRange(::javax::swing::text::JTextComponent* a, int32_t b, int32_t c, ::javax::swing::text::Position$Bias* d, ::javax::swing::text::Position$Bias* e) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(::javax::swing::JComponent* a, int32_t b) override;
	virtual int32_t getAccessibleChildrenCount(::javax::swing::JComponent* a) override;
	virtual ::javax::swing::text::EditorKit* getEditorKit(::javax::swing::text::JTextComponent* a) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* a) override;
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::JTextComponent* a, int32_t b, ::javax::swing::text::Position$Bias* c, int32_t d, $Array<::javax::swing::text::Position$Bias>* e) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* a) override;
	virtual ::javax::swing::text::View* getRootView(::javax::swing::text::JTextComponent* a) override;
	virtual $String* getToolTipText(::javax::swing::text::JTextComponent* a, ::java::awt::Point* b) override;
	virtual $Array<::javax::swing::plaf::ComponentUI>* getUIs();
	virtual void installUI(::javax::swing::JComponent* a) override;
	virtual ::java::awt::Rectangle* modelToView(::javax::swing::text::JTextComponent* a, int32_t b) override;
	virtual ::java::awt::Rectangle* modelToView(::javax::swing::text::JTextComponent* a, int32_t b, ::javax::swing::text::Position$Bias* c) override;
	virtual ::java::awt::geom::Rectangle2D* modelToView2D(::javax::swing::text::JTextComponent* a, int32_t b, ::javax::swing::text::Position$Bias* c) override;
	virtual void paint(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual void uninstallUI(::javax::swing::JComponent* a) override;
	virtual void update(::java::awt::Graphics* a, ::javax::swing::JComponent* b) override;
	virtual int32_t viewToModel(::javax::swing::text::JTextComponent* a, ::java::awt::Point* b) override;
	virtual int32_t viewToModel(::javax::swing::text::JTextComponent* a, ::java::awt::Point* b, $Array<::javax::swing::text::Position$Bias>* c) override;
	virtual int32_t viewToModel2D(::javax::swing::text::JTextComponent* a, ::java::awt::geom::Point2D* b, $Array<::javax::swing::text::Position$Bias>* c) override;
	::java::util::Vector* uis = nullptr;
};

			} // multi
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_multi_MultiTextUI_h_