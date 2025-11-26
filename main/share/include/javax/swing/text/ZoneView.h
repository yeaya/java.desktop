#ifndef _javax_swing_text_ZoneView_h_
#define _javax_swing_text_ZoneView_h_
//$ class javax.swing.text.ZoneView
//$ extends javax.swing.text.BoxView

#include <javax/swing/text/BoxView.h>

namespace java {
	namespace awt {
		class Shape;
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
			class DocumentEvent$ElementChange;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import ZoneView : public ::javax::swing::text::BoxView {
	$class(ZoneView, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	ZoneView();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual ::javax::swing::text::View* createZone(int32_t p0, int32_t p1);
	virtual int32_t getDesiredZoneEnd(int32_t pos);
	virtual int32_t getMaxZonesLoaded();
	virtual int32_t getMaximumZoneSize();
	virtual int32_t getViewIndexAtPosition(int32_t pos) override;
	virtual void handleInsert(int32_t pos, int32_t length);
	virtual void handleRemove(int32_t pos, int32_t length);
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual bool isZoneLoaded(::javax::swing::text::View* zone);
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setMaxZonesLoaded(int32_t mzl);
	virtual void setMaximumZoneSize(int32_t size);
	virtual void splitZone(int32_t index, int32_t offs0, int32_t offs1);
	virtual void unloadOldZones();
	virtual void unloadZone(::javax::swing::text::View* zone);
	virtual bool updateChildren(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::BoxView::viewToModel;
	virtual void zoneWasLoaded(::javax::swing::text::View* zone);
	int32_t maxZoneSize = 0;
	int32_t maxZonesLoaded = 0;
	::java::util::Vector* loadedZones = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ZoneView_h_