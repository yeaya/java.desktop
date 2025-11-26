#ifndef _javax_swing_text_rtf_RTFEditorKit_h_
#define _javax_swing_text_rtf_RTFEditorKit_h_
//$ class javax.swing.text.rtf.RTFEditorKit
//$ extends javax.swing.text.StyledEditorKit

#include <javax/swing/text/StyledEditorKit.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
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
		namespace text {
			namespace rtf {

class $import RTFEditorKit : public ::javax::swing::text::StyledEditorKit {
	$class(RTFEditorKit, $NO_CLASS_INIT, ::javax::swing::text::StyledEditorKit)
public:
	RTFEditorKit();
	void init$();
	virtual $String* getContentType() override;
	virtual void read(::java::io::InputStream* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void read(::java::io::Reader* in, ::javax::swing::text::Document* doc, int32_t pos) override;
	virtual void write(::java::io::OutputStream* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
	virtual void write(::java::io::Writer* out, ::javax::swing::text::Document* doc, int32_t pos, int32_t len) override;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFEditorKit_h_