#ifndef _java_awt_Component$FlipSubRegionBufferStrategy_h_
#define _java_awt_Component$FlipSubRegionBufferStrategy_h_
//$ class java.awt.Component$FlipSubRegionBufferStrategy
//$ extends java.awt.Component$FlipBufferStrategy
//$ implements sun.awt.SubRegionShowable

#include <java/awt/Component$FlipBufferStrategy.h>
#include <sun/awt/SubRegionShowable.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class Component;
	}
}

namespace java {
	namespace awt {

class Component$FlipSubRegionBufferStrategy : public ::java::awt::Component$FlipBufferStrategy, public ::sun::awt::SubRegionShowable {
	$class(Component$FlipSubRegionBufferStrategy, $NO_CLASS_INIT, ::java::awt::Component$FlipBufferStrategy, ::sun::awt::SubRegionShowable)
public:
	Component$FlipSubRegionBufferStrategy();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* this$0, int32_t numBuffers, ::java::awt::BufferCapabilities* caps);
	using ::java::awt::Component$FlipBufferStrategy::show;
	virtual void show(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual bool showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
	virtual $String* toString() override;
	::java::awt::Component* this$0 = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$FlipSubRegionBufferStrategy_h_