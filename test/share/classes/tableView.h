#ifndef _tableView_h_
#define _tableView_h_
//$ class tableView
//$ extends javax.swing.text.TableView
//$ implements javax.swing.text.ViewFactory

#include <javax/swing/text/TableView.h>
#include <javax/swing/text/ViewFactory.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
		class Shape;
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

class tableView : public ::javax::swing::text::TableView, public ::javax::swing::text::ViewFactory {
	$class(tableView, $NO_CLASS_INIT, ::javax::swing::text::TableView, ::javax::swing::text::ViewFactory)
public:
	tableView();
	using ::javax::swing::text::TableView::getViewIndex;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
	virtual float getAlignment(int32_t axis) override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual ::javax::swing::text::ViewFactory* getViewFactory() override;
	using ::javax::swing::text::TableView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void paintChild(::java::awt::Graphics* g, ::java::awt::Rectangle* alloc, int32_t index) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setSize(float width, float height) override;
	using ::javax::swing::text::TableView::viewToModel;
	virtual $String* toString() override;
};

#endif // _tableView_h_