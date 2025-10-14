#ifndef _javax_swing_JEditorPane$PageLoader_h_
#define _javax_swing_JEditorPane$PageLoader_h_
//$ class javax.swing.JEditorPane$PageLoader
//$ extends javax.swing.SwingWorker

#include <javax/swing/SwingWorker.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}

namespace javax {
	namespace swing {

class $export JEditorPane$PageLoader : public ::javax::swing::SwingWorker {
	$class(JEditorPane$PageLoader, $NO_CLASS_INIT, ::javax::swing::SwingWorker)
public:
	JEditorPane$PageLoader();
	void init$(::javax::swing::JEditorPane* this$0, ::javax::swing::text::Document* doc, ::java::io::InputStream* in, ::java::net::URL* old, ::java::net::URL* page);
	virtual $Object* doInBackground() override;
	::javax::swing::JEditorPane* this$0 = nullptr;
	::java::io::InputStream* in = nullptr;
	::java::net::URL* old = nullptr;
	::java::net::URL* page = nullptr;
	::javax::swing::text::Document* doc = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$PageLoader_h_