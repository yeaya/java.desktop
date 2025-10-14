#ifndef _javax_swing_plaf_basic_BasicEditorPaneUI_h_
#define _javax_swing_plaf_basic_BasicEditorPaneUI_h_
//$ class javax.swing.plaf.basic.BasicEditorPaneUI
//$ extends javax.swing.plaf.basic.BasicTextUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>

#pragma push_macro("FONT_ATTRIBUTE_KEY")
#undef FONT_ATTRIBUTE_KEY

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
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
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicEditorPaneUI : public ::javax::swing::plaf::basic::BasicTextUI {
	$class(BasicEditorPaneUI, 0, ::javax::swing::plaf::basic::BasicTextUI)
public:
	BasicEditorPaneUI();
	void init$();
	virtual void addActions(::javax::swing::ActionMap* map, $Array<::javax::swing::Action>* actions);
	virtual void cleanDisplayProperties();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::ActionMap* getActionMap() override;
	virtual ::javax::swing::text::EditorKit* getEditorKit(::javax::swing::text::JTextComponent* tc) override;
	virtual $String* getPropertyPrefix() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeActions(::javax::swing::ActionMap* map, $Array<::javax::swing::Action>* actions);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateCSS(::java::awt::Font* font, ::java::awt::Color* fg);
	virtual void updateDisplayProperties(::java::awt::Font* font, ::java::awt::Color* fg);
	void updateFont(::java::awt::Font* font);
	void updateForeground(::java::awt::Color* color);
	void updateStyle(::java::awt::Font* font, ::java::awt::Color* fg);
	static $String* FONT_ATTRIBUTE_KEY;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FONT_ATTRIBUTE_KEY")

#endif // _javax_swing_plaf_basic_BasicEditorPaneUI_h_