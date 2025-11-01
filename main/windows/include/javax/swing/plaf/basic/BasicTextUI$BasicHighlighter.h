#ifndef _javax_swing_plaf_basic_BasicTextUI$BasicHighlighter_h_
#define _javax_swing_plaf_basic_BasicTextUI$BasicHighlighter_h_
//$ class javax.swing.plaf.basic.BasicTextUI$BasicHighlighter
//$ extends javax.swing.text.DefaultHighlighter
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultHighlighter.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTextUI$BasicHighlighter : public ::javax::swing::text::DefaultHighlighter, public ::javax::swing::plaf::UIResource {
	$class(BasicTextUI$BasicHighlighter, $NO_CLASS_INIT, ::javax::swing::text::DefaultHighlighter, ::javax::swing::plaf::UIResource)
public:
	BasicTextUI$BasicHighlighter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$BasicHighlighter_h_