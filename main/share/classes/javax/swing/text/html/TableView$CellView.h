#ifndef _javax_swing_text_html_TableView$CellView_h_
#define _javax_swing_text_html_TableView$CellView_h_
//$ class javax.swing.text.html.TableView$CellView
//$ extends javax.swing.text.html.BlockView

#include <java/lang/Array.h>
#include <javax/swing/text/html/BlockView.h>

namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class TableView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class TableView$CellView : public ::javax::swing::text::html::BlockView {
	$class(TableView$CellView, $NO_CLASS_INIT, ::javax::swing::text::html::BlockView)
public:
	TableView$CellView();
	using ::javax::swing::text::html::BlockView::getViewIndex;
	void init$(::javax::swing::text::html::TableView* this$0, ::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMajorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) override;
	using ::javax::swing::text::html::BlockView::modelToView;
	using ::javax::swing::text::html::BlockView::viewToModel;
	::javax::swing::text::html::TableView* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_TableView$CellView_h_