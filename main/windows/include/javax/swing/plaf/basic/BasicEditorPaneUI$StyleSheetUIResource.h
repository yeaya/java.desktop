#ifndef _javax_swing_plaf_basic_BasicEditorPaneUI$StyleSheetUIResource_h_
#define _javax_swing_plaf_basic_BasicEditorPaneUI$StyleSheetUIResource_h_
//$ class javax.swing.plaf.basic.BasicEditorPaneUI$StyleSheetUIResource
//$ extends javax.swing.text.html.StyleSheet
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/html/StyleSheet.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicEditorPaneUI$StyleSheetUIResource : public ::javax::swing::text::html::StyleSheet, public ::javax::swing::plaf::UIResource {
	$class(BasicEditorPaneUI$StyleSheetUIResource, $NO_CLASS_INIT, ::javax::swing::text::html::StyleSheet, ::javax::swing::plaf::UIResource)
public:
	BasicEditorPaneUI$StyleSheetUIResource();
	using ::javax::swing::text::html::StyleSheet::getFont;
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

#endif // _javax_swing_plaf_basic_BasicEditorPaneUI$StyleSheetUIResource_h_