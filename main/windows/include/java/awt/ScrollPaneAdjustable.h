#ifndef _java_awt_ScrollPaneAdjustable_h_
#define _java_awt_ScrollPaneAdjustable_h_
//$ class java.awt.ScrollPaneAdjustable
//$ extends java.awt.Adjustable
//$ implements java.io.Serializable

#include <java/awt/Adjustable.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("SCROLLPANE_ONLY")
#undef SCROLLPANE_ONLY

namespace java {
	namespace awt {
		class ScrollPane;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AdjustmentListener;
		}
	}
}

namespace java {
	namespace awt {

class $import ScrollPaneAdjustable : public ::java::awt::Adjustable, public ::java::io::Serializable {
	$class(ScrollPaneAdjustable, 0, ::java::awt::Adjustable, ::java::io::Serializable)
public:
	ScrollPaneAdjustable();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::ScrollPane* sp, ::java::awt::event::AdjustmentListener* l, int32_t orientation);
	virtual void addAdjustmentListener(::java::awt::event::AdjustmentListener* l) override;
	virtual $Array<::java::awt::event::AdjustmentListener>* getAdjustmentListeners();
	virtual int32_t getBlockIncrement() override;
	virtual int32_t getMaximum() override;
	virtual int32_t getMinimum() override;
	virtual int32_t getOrientation() override;
	virtual int32_t getUnitIncrement() override;
	virtual int32_t getValue() override;
	virtual bool getValueIsAdjusting();
	virtual int32_t getVisibleAmount() override;
	static void initIDs();
	virtual $String* paramString();
	virtual void removeAdjustmentListener(::java::awt::event::AdjustmentListener* l) override;
	virtual void setBlockIncrement(int32_t b) override;
	virtual void setMaximum(int32_t max) override;
	virtual void setMinimum(int32_t min) override;
	virtual void setSpan(int32_t min, int32_t max, int32_t visible);
	void setTypedValue(int32_t v, int32_t type);
	virtual void setUnitIncrement(int32_t u) override;
	virtual void setValue(int32_t v) override;
	virtual void setValueIsAdjusting(bool b);
	virtual void setVisibleAmount(int32_t v) override;
	virtual $String* toString() override;
	::java::awt::ScrollPane* sp = nullptr;
	int32_t orientation = 0;
	int32_t value = 0;
	int32_t minimum = 0;
	int32_t maximum = 0;
	int32_t visibleAmount = 0;
	bool isAdjusting = false;
	int32_t unitIncrement = 0;
	int32_t blockIncrement = 0;
	::java::awt::event::AdjustmentListener* adjustmentListener = nullptr;
	static $String* SCROLLPANE_ONLY;
	static const int64_t serialVersionUID = (int64_t)0xD15FC9183E503B89;
};

	} // awt
} // java

#pragma pop_macro("SCROLLPANE_ONLY")

#endif // _java_awt_ScrollPaneAdjustable_h_