#ifndef _bug5073047$MyTheme_h_
#define _bug5073047$MyTheme_h_
//$ class bug5073047$MyTheme
//$ extends javax.swing.plaf.metal.DefaultMetalTheme

#include <javax/swing/plaf/metal/DefaultMetalTheme.h>

namespace javax {
	namespace swing {
		namespace plaf {
			class FontUIResource;
		}
	}
}

class bug5073047$MyTheme : public ::javax::swing::plaf::metal::DefaultMetalTheme {
	$class(bug5073047$MyTheme, $NO_CLASS_INIT, ::javax::swing::plaf::metal::DefaultMetalTheme)
public:
	bug5073047$MyTheme();
	void init$();
	virtual ::javax::swing::plaf::FontUIResource* getControlTextFont() override;
	::javax::swing::plaf::FontUIResource* ctf = nullptr;
};

#endif // _bug5073047$MyTheme_h_