#ifndef _com_sun_java_swing_plaf_gtk_Metacity$ArithmeticExpressionEvaluator_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$ArithmeticExpressionEvaluator_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$ArithmeticExpressionEvaluator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class Metacity;
						class Metacity$PeekableStringTokenizer;
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$ArithmeticExpressionEvaluator : public ::java::lang::Object {
	$class(Metacity$ArithmeticExpressionEvaluator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Metacity$ArithmeticExpressionEvaluator();
	void init$(::com::sun::java::swing::plaf::gtk::Metacity* this$0);
	virtual int32_t evaluate($String* expr);
	virtual int32_t evaluate($String* expr, int32_t fallback);
	virtual float expression();
	virtual float getFactorValue();
	virtual float getTermValue();
	::com::sun::java::swing::plaf::gtk::Metacity* this$0 = nullptr;
	::com::sun::java::swing::plaf::gtk::Metacity$PeekableStringTokenizer* tokenizer = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_Metacity$ArithmeticExpressionEvaluator_h_