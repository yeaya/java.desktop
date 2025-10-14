#ifndef _javax_swing_plaf_basic_BasicHTML$BasicEditorKit_h_
#define _javax_swing_plaf_basic_BasicHTML$BasicEditorKit_h_
//$ class javax.swing.plaf.basic.BasicHTML$BasicEditorKit
//$ extends javax.swing.text.html.HTMLEditorKit

#include <javax/swing/text/html/HTMLEditorKit.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicHTML$BasicEditorKit : public ::javax::swing::text::html::HTMLEditorKit {
	$class(BasicHTML$BasicEditorKit, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit)
public:
	BasicHTML$BasicEditorKit();
	using ::javax::swing::text::html::HTMLEditorKit::createDefaultDocument;
	void init$();
	virtual ::javax::swing::text::Document* createDefaultDocument(::java::awt::Font* defaultFont, ::java::awt::Color* foreground);
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet() override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	using ::javax::swing::text::html::HTMLEditorKit::read;
	using ::javax::swing::text::html::HTMLEditorKit::write;
	static ::javax::swing::text::html::StyleSheet* defaultStyles;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicHTML$BasicEditorKit_h_