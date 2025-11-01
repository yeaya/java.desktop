#ifndef _sun_font_FontDesignMetrics$KeyReference_h_
#define _sun_font_FontDesignMetrics$KeyReference_h_
//$ class sun.font.FontDesignMetrics$KeyReference
//$ extends java.lang.ref.SoftReference
//$ implements sun.java2d.DisposerRecord,sun.java2d.Disposer$PollDisposable

#include <java/lang/ref/SoftReference.h>
#include <sun/java2d/Disposer$PollDisposable.h>
#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace sun {
	namespace font {

class FontDesignMetrics$KeyReference : public ::java::lang::ref::SoftReference, public ::sun::java2d::DisposerRecord, public ::sun::java2d::Disposer$PollDisposable {
	$class(FontDesignMetrics$KeyReference, 0, ::java::lang::ref::SoftReference, ::sun::java2d::DisposerRecord, ::sun::java2d::Disposer$PollDisposable)
public:
	FontDesignMetrics$KeyReference();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* key, Object$* value);
	virtual void dispose() override;
	virtual $String* toString() override;
	static ::java::lang::ref::ReferenceQueue* queue;
	$Object* key = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FontDesignMetrics$KeyReference_h_