#ifndef _tableView$trView_h_
#define _tableView$trView_h_
//$ class tableView$trView
//$ extends javax.swing.text.TableView$TableRow

#include <javax/swing/text/TableView$TableRow.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}
class tableView;

class tableView$trView : public ::javax::swing::text::TableView$TableRow {
	$class(tableView$trView, $NO_CLASS_INIT, ::javax::swing::text::TableView$TableRow)
public:
	tableView$trView();
	using ::javax::swing::text::TableView$TableRow::getViewIndex;
	void init$(::tableView* this$0, ::javax::swing::text::Element* elem);
	virtual float getAlignment(int32_t axis) override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	using ::javax::swing::text::TableView$TableRow::modelToView;
	virtual void paintChild(::java::awt::Graphics* g, ::java::awt::Rectangle* alloc, int32_t index) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	using ::javax::swing::text::TableView$TableRow::viewToModel;
	::tableView* this$0 = nullptr;
};

#endif // _tableView$trView_h_