#ifndef _javax_swing_JTextPane_h_
#define _javax_swing_JTextPane_h_
//$ class javax.swing.JTextPane
//$ extends javax.swing.JEditorPane

#include <javax/swing/JEditorPane.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class EditorKit;
			class MutableAttributeSet;
			class Style;
			class StyledDocument;
			class StyledEditorKit;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTextPane : public ::javax::swing::JEditorPane {
	$class(JTextPane, 0, ::javax::swing::JEditorPane)
public:
	JTextPane();
	using ::javax::swing::JEditorPane::getText;
	using ::javax::swing::JEditorPane::getToolTipText;
	using ::javax::swing::JEditorPane::contains;
	using ::javax::swing::JEditorPane::enable;
	using ::javax::swing::JEditorPane::getBounds;
	using ::javax::swing::JEditorPane::getSize;
	using ::javax::swing::JEditorPane::getLocation;
	using ::javax::swing::JEditorPane::firePropertyChange;
	using ::javax::swing::JEditorPane::add;
	using ::javax::swing::JEditorPane::getMousePosition;
	void init$();
	void init$(::javax::swing::text::StyledDocument* doc);
	virtual ::javax::swing::text::Style* addStyle($String* nm, ::javax::swing::text::Style* parent);
	virtual ::javax::swing::text::EditorKit* createDefaultEditorKit() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttributes();
	virtual ::javax::swing::text::MutableAttributeSet* getInputAttributes();
	virtual ::javax::swing::text::Style* getLogicalStyle();
	virtual ::javax::swing::text::AttributeSet* getParagraphAttributes();
	virtual ::javax::swing::text::Style* getStyle($String* nm);
	virtual ::javax::swing::text::StyledDocument* getStyledDocument();
	::javax::swing::text::StyledEditorKit* getStyledEditorKit();
	virtual $String* getUIClassID() override;
	virtual void insertComponent(::java::awt::Component* c);
	virtual void insertIcon(::javax::swing::Icon* g);
	using ::javax::swing::JEditorPane::list;
	virtual $String* paramString() override;
	using ::javax::swing::JEditorPane::read;
	using ::javax::swing::JEditorPane::print;
	using ::javax::swing::JEditorPane::remove;
	virtual void removeStyle($String* nm);
	using ::javax::swing::JEditorPane::repaint;
	virtual void replaceSelection($String* content) override;
	void replaceSelection($String* content, bool checkEditable);
	using ::javax::swing::JEditorPane::requestFocus;
	using ::javax::swing::JEditorPane::requestFocusInWindow;
	virtual void setCharacterAttributes(::javax::swing::text::AttributeSet* attr, bool replace);
	virtual void setDocument(::javax::swing::text::Document* doc) override;
	virtual void setEditorKit(::javax::swing::text::EditorKit* kit) override;
	virtual void setLogicalStyle(::javax::swing::text::Style* s);
	virtual void setParagraphAttributes(::javax::swing::text::AttributeSet* attr, bool replace);
	virtual void setStyledDocument(::javax::swing::text::StyledDocument* doc);
	using ::javax::swing::JEditorPane::setUI;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
};

	} // swing
} // javax

#endif // _javax_swing_JTextPane_h_