#ifndef _sun_java2d_loops_MaskBlit$General_h_
#define _sun_java2d_loops_MaskBlit$General_h_
//$ class sun.java2d.loops.MaskBlit$General
//$ extends sun.java2d.loops.MaskBlit
//$ implements sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp

#include <java/lang/Array.h>
#include <sun/java2d/loops/GraphicsPrimitive$GeneralBinaryOp.h>
#include <sun/java2d/loops/MaskBlit.h>

namespace java {
	namespace awt {
		class Composite;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class Blit;
			class CompositeType;
			class GraphicsPrimitive;
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class MaskBlit$General : public ::sun::java2d::loops::MaskBlit, public ::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp {
	$class(MaskBlit$General, $NO_CLASS_INIT, ::sun::java2d::loops::MaskBlit, ::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp)
public:
	MaskBlit$General();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::sun::java2d::loops::CompositeType* getCompositeType() override;
	virtual ::sun::java2d::loops::SurfaceType* getDestType() override;
	virtual int32_t getPrimTypeID() override;
	virtual $String* getSignature() override;
	virtual ::sun::java2d::loops::SurfaceType* getSourceType() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void MaskBlit$(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height, $bytes* mask, int32_t offset, int32_t scan) override;
	virtual void setPrimitives(::sun::java2d::loops::Blit* srcconverter, ::sun::java2d::loops::Blit* dstconverter, ::sun::java2d::loops::GraphicsPrimitive* genericop, ::sun::java2d::loops::Blit* resconverter) override;
	virtual $String* toString() override;
	::sun::java2d::loops::Blit* convertsrc = nullptr;
	::sun::java2d::loops::Blit* convertdst = nullptr;
	::sun::java2d::loops::MaskBlit* performop = nullptr;
	::sun::java2d::loops::Blit* convertresult = nullptr;
	::java::lang::ref::WeakReference* srcTmp = nullptr;
	::java::lang::ref::WeakReference* dstTmp = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_MaskBlit$General_h_