#ifndef _javax_swing_plaf_basic_BasicHTML_h_
#define _javax_swing_plaf_basic_BasicHTML_h_
//$ class javax.swing.plaf.basic.BasicHTML
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Shape;
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
			namespace basic {
				class BasicHTML$BasicEditorKit;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicHTML : public ::java::lang::Object {
	$class(BasicHTML, 0, ::java::lang::Object)
public:
	BasicHTML();
	void init$();
	static ::javax::swing::text::View* createHTMLView(::javax::swing::JComponent* c, $String* html);
	static int32_t getBaseline(::javax::swing::JComponent* c, int32_t y, int32_t ascent, int32_t w, int32_t h);
	static int32_t getBaseline(::javax::swing::text::View* view, int32_t w, int32_t h);
	static int32_t getBaseline(::javax::swing::text::View* view, ::java::awt::Shape* bounds);
	static ::javax::swing::plaf::basic::BasicHTML$BasicEditorKit* getFactory();
	static int32_t getHTMLBaseline(::javax::swing::text::View* view, int32_t w, int32_t h);
	static bool hasParagraph(::javax::swing::text::View* view);
	static bool isHTMLString($String* s);
	static void updateRenderer(::javax::swing::JComponent* c, $String* text);
	static $String* htmlDisable;
	static $String* propertyKey;
	static $String* documentBaseKey;
	static ::javax::swing::plaf::basic::BasicHTML$BasicEditorKit* basicHTMLFactory;
	static ::javax::swing::text::ViewFactory* basicHTMLViewFactory;
	static $String* styleChanges;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicHTML_h_