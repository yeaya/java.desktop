#ifndef _TableFactory_h_
#define _TableFactory_h_
//$ class TableFactory
//$ extends javax.swing.text.ViewFactory

#include <javax/swing/text/ViewFactory.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

class TableFactory : public ::javax::swing::text::ViewFactory {
	$class(TableFactory, $NO_CLASS_INIT, ::javax::swing::text::ViewFactory)
public:
	TableFactory();
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
};

#endif // _TableFactory_h_