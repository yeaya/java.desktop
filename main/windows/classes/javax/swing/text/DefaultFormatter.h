#ifndef _javax_swing_text_DefaultFormatter_h_
#define _javax_swing_text_DefaultFormatter_h_
//$ class javax.swing.text.DefaultFormatter
//$ extends javax.swing.JFormattedTextField$AbstractFormatter
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class DefaultFormatter$ReplaceHolder;
			class DocumentFilter;
			class DocumentFilter$FilterBypass;
			class JTextComponent;
			class NavigationFilter;
			class NavigationFilter$FilterBypass;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultFormatter : public ::javax::swing::JFormattedTextField$AbstractFormatter, public ::java::lang::Cloneable {
	$class(DefaultFormatter, $NO_CLASS_INIT, ::javax::swing::JFormattedTextField$AbstractFormatter, ::java::lang::Cloneable)
public:
	DefaultFormatter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::JFormattedTextField* access$000(::javax::swing::text::DefaultFormatter* x0);
	static ::javax::swing::JFormattedTextField* access$100(::javax::swing::text::DefaultFormatter* x0);
	static ::javax::swing::JFormattedTextField* access$200(::javax::swing::text::DefaultFormatter* x0);
	static ::javax::swing::JFormattedTextField* access$300(::javax::swing::text::DefaultFormatter* x0);
	static ::javax::swing::JFormattedTextField* access$400(::javax::swing::text::DefaultFormatter* x0);
	virtual bool canReplace(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh);
	virtual $Object* clone() override;
	virtual void commitEdit();
	virtual bool getAllowsInvalid();
	virtual bool getCommitsOnValidEdit();
	virtual ::javax::swing::text::DocumentFilter* getDocumentFilter() override;
	virtual int32_t getInitialVisualPosition();
	virtual ::javax::swing::text::NavigationFilter* getNavigationFilter() override;
	virtual int32_t getNextCursorPosition(int32_t offset, int32_t direction);
	int32_t getNextNavigatableChar(int32_t offset, int32_t direction);
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::JTextComponent* text, int32_t pos, ::javax::swing::text::Position$Bias* bias, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	virtual bool getOverwriteMode();
	virtual ::javax::swing::text::DefaultFormatter$ReplaceHolder* getReplaceHolder(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs);
	virtual $String* getReplaceString(int32_t offset, int32_t deleteLength, $String* replaceString);
	virtual $Class* getValueClass();
	virtual void install(::javax::swing::JFormattedTextField* ftf) override;
	virtual bool isLegalInsertText($String* text);
	virtual bool isNavigatable(int32_t offset);
	virtual bool isValidEdit(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh);
	virtual void moveDot(::javax::swing::text::NavigationFilter$FilterBypass* fb, int32_t dot, ::javax::swing::text::Position$Bias* bias);
	virtual void positionCursorAtInitialLocation();
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs);
	virtual bool replace(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh);
	virtual void repositionCursor(int32_t offset, int32_t direction);
	virtual void setAllowsInvalid(bool allowsInvalid);
	virtual void setCommitsOnValidEdit(bool commit);
	virtual void setDot(::javax::swing::text::NavigationFilter$FilterBypass* fb, int32_t dot, ::javax::swing::text::Position$Bias* bias);
	virtual void setOverwriteMode(bool overwriteMode);
	virtual void setValueClass($Class* valueClass);
	virtual $Object* stringToValue($String* string) override;
	virtual $String* toString() override;
	virtual void updateValue();
	virtual void updateValue(Object$* value);
	virtual $String* valueToString(Object$* value) override;
	bool allowsInvalid = false;
	bool overwriteMode = false;
	bool commitOnEdit = false;
	$Class* valueClass = nullptr;
	::javax::swing::text::NavigationFilter* navigationFilter = nullptr;
	::javax::swing::text::DocumentFilter* documentFilter = nullptr;
	::javax::swing::text::DefaultFormatter$ReplaceHolder* replaceHolder = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultFormatter_h_