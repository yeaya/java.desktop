#ifndef _javax_swing_JFormattedTextField$AbstractFormatter_h_
#define _javax_swing_JFormattedTextField$AbstractFormatter_h_
//$ class javax.swing.JFormattedTextField$AbstractFormatter
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class Action;
		class JFormattedTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DocumentFilter;
			class NavigationFilter;
		}
	}
}

namespace javax {
	namespace swing {

class $export JFormattedTextField$AbstractFormatter : public ::java::io::Serializable {
	$class(JFormattedTextField$AbstractFormatter, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	JFormattedTextField$AbstractFormatter();
	void init$();
	virtual $Object* clone() override;
	virtual $Array<::javax::swing::Action>* getActions();
	virtual ::javax::swing::text::DocumentFilter* getDocumentFilter();
	virtual ::javax::swing::JFormattedTextField* getFormattedTextField();
	virtual ::javax::swing::text::NavigationFilter* getNavigationFilter();
	virtual void install(::javax::swing::JFormattedTextField* ftf);
	void installDocumentFilter(::javax::swing::text::DocumentFilter* filter);
	virtual void invalidEdit();
	virtual void setEditValid(bool valid);
	virtual $Object* stringToValue($String* text) {return nullptr;}
	virtual void uninstall();
	virtual $String* valueToString(Object$* value) {return nullptr;}
	::javax::swing::JFormattedTextField* ftf = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFormattedTextField$AbstractFormatter_h_