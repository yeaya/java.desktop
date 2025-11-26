#ifndef _javax_swing_text_StyledEditorKit_h_
#define _javax_swing_text_StyledEditorKit_h_
//$ class javax.swing.text.StyledEditorKit
//$ extends javax.swing.text.DefaultEditorKit

#include <java/lang/Array.h>
#include <javax/swing/text/DefaultEditorKit.h>

namespace javax {
	namespace swing {
		class Action;
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
			class Element;
			class MutableAttributeSet;
			class StyledEditorKit$AttributeTracker;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyledEditorKit : public ::javax::swing::text::DefaultEditorKit {
	$class(StyledEditorKit, 0, ::javax::swing::text::DefaultEditorKit)
public:
	StyledEditorKit();
	void init$();
	virtual $Object* clone() override;
	virtual ::javax::swing::text::Document* createDefaultDocument() override;
	void createInputAttributeUpdated();
	void createInputAttributes();
	virtual void createInputAttributes(::javax::swing::text::Element* element, ::javax::swing::text::MutableAttributeSet* set);
	virtual void deinstall(::javax::swing::JEditorPane* c) override;
	virtual $Array<::javax::swing::Action>* getActions() override;
	virtual ::javax::swing::text::Element* getCharacterAttributeRun();
	virtual ::javax::swing::text::MutableAttributeSet* getInputAttributes() override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	virtual void install(::javax::swing::JEditorPane* c) override;
	static ::javax::swing::text::ViewFactory* defaultFactory;
	::javax::swing::text::Element* currentRun = nullptr;
	::javax::swing::text::Element* currentParagraph = nullptr;
	::javax::swing::text::MutableAttributeSet* inputAttributes = nullptr;
	::javax::swing::text::StyledEditorKit$AttributeTracker* inputAttributeUpdater = nullptr;
	static $Array<::javax::swing::Action>* defaultActions;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit_h_