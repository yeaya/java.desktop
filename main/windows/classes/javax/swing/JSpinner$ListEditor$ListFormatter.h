#ifndef _javax_swing_JSpinner$ListEditor$ListFormatter_h_
#define _javax_swing_JSpinner$ListEditor$ListFormatter_h_
//$ class javax.swing.JSpinner$ListEditor$ListFormatter
//$ extends javax.swing.JFormattedTextField$AbstractFormatter

#include <javax/swing/JFormattedTextField$AbstractFormatter.h>

namespace javax {
	namespace swing {
		class JSpinner$ListEditor;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DocumentFilter;
		}
	}
}

namespace javax {
	namespace swing {

class JSpinner$ListEditor$ListFormatter : public ::javax::swing::JFormattedTextField$AbstractFormatter {
	$class(JSpinner$ListEditor$ListFormatter, $NO_CLASS_INIT, ::javax::swing::JFormattedTextField$AbstractFormatter)
public:
	JSpinner$ListEditor$ListFormatter();
	void init$(::javax::swing::JSpinner$ListEditor* this$0);
	virtual ::javax::swing::text::DocumentFilter* getDocumentFilter() override;
	virtual $Object* stringToValue($String* string) override;
	virtual $String* valueToString(Object$* value) override;
	::javax::swing::JSpinner$ListEditor* this$0 = nullptr;
	::javax::swing::text::DocumentFilter* filter = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$ListEditor$ListFormatter_h_