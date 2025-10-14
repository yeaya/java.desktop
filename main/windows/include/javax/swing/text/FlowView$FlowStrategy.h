#ifndef _javax_swing_text_FlowView$FlowStrategy_h_
#define _javax_swing_text_FlowView$FlowStrategy_h_
//$ class javax.swing.text.FlowView$FlowStrategy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class FlowView;
			class Position;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import FlowView$FlowStrategy : public ::java::lang::Object {
	$class(FlowView$FlowStrategy, 0, ::java::lang::Object)
public:
	FlowView$FlowStrategy();
	void init$();
	virtual void addDamage(::javax::swing::text::FlowView* fv, int32_t offset);
	virtual void adjustRow(::javax::swing::text::FlowView* fv, int32_t rowIndex, int32_t desiredSpan, int32_t x);
	virtual void changedUpdate(::javax::swing::text::FlowView* fv, ::javax::swing::event::DocumentEvent* e, ::java::awt::Rectangle* alloc);
	virtual ::javax::swing::text::View* createView(::javax::swing::text::FlowView* fv, int32_t startOffset, int32_t spanLeft, int32_t rowIndex);
	virtual ::javax::swing::text::View* getLogicalView(::javax::swing::text::FlowView* fv);
	virtual void insertUpdate(::javax::swing::text::FlowView* fv, ::javax::swing::event::DocumentEvent* e, ::java::awt::Rectangle* alloc);
	virtual void layout(::javax::swing::text::FlowView* fv);
	virtual int32_t layoutRow(::javax::swing::text::FlowView* fv, int32_t rowIndex, int32_t pos);
	virtual void removeUpdate(::javax::swing::text::FlowView* fv, ::javax::swing::event::DocumentEvent* e, ::java::awt::Rectangle* alloc);
	virtual void reparentViews(::javax::swing::text::View* pool, int32_t startPos);
	virtual void unsetDamage();
	static bool $assertionsDisabled;
	::javax::swing::text::Position* damageStart = nullptr;
	::java::util::Vector* viewBuffer = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_FlowView$FlowStrategy_h_