#ifndef _apple_laf_JRSUIControl_h_
#define _apple_laf_JRSUIControl_h_
//$ class apple.laf.JRSUIControl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INCOHERENT")
#undef INCOHERENT
#pragma push_macro("NIO_BUFFER_SIZE")
#undef NIO_BUFFER_SIZE
#pragma push_macro("NOT_INIT")
#undef NOT_INIT
#pragma push_macro("NULL_CG_REF")
#undef NULL_CG_REF
#pragma push_macro("NULL_PTR")
#undef NULL_PTR
#pragma push_macro("SUCCESS")
#undef SUCCESS

namespace apple {
	namespace laf {
		class JRSUIConstants$DoubleValue;
		class JRSUIConstants$Hit;
		class JRSUIConstants$Key;
		class JRSUIControl$BufferState;
		class JRSUIControl$ThreadLocalByteBuffer;
		class JRSUIState;
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace apple {
	namespace laf {

class JRSUIControl : public ::java::lang::Object {
	$class(JRSUIControl, $HAS_FINALIZE, ::java::lang::Object)
public:
	JRSUIControl();
	void init$(bool flipped);
	void init$(::apple::laf::JRSUIControl* other);
	static void disposeCFDictionary(int64_t cfDictionaryPtr);
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	static int64_t getCFDictionary(bool flipped);
	::apple::laf::JRSUIConstants$Hit* getHitForPoint(int32_t x, int32_t y, int32_t w, int32_t h, int32_t hitX, int32_t hitY);
	static int32_t getNativeHitPart(int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, double hitX, double hitY);
	static void getNativePartBounds($doubles* rect, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int32_t part);
	static double getNativeScrollBarOffsetChange(int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int32_t offset, int32_t visibleAmount, int32_t extent);
	void getPartBounds($doubles* rect, int32_t x, int32_t y, int32_t w, int32_t h, int32_t part);
	static int64_t getPtrOfBuffer(::java::nio::ByteBuffer* byteBuffer);
	double getScrollBarOffsetChange(int32_t x, int32_t y, int32_t w, int32_t h, int32_t offset, int32_t visibleAmount, int32_t extent);
	static ::apple::laf::JRSUIControl$ThreadLocalByteBuffer* getThreadLocalBuffer();
	::apple::laf::JRSUIControl$BufferState* handleBufferOverflow(::java::nio::ByteBuffer* buffer, int32_t changeIndex);
	virtual int32_t hashCode() override;
	static void initJRSUI();
	static int32_t initNativeJRSUI();
	::apple::laf::JRSUIControl$BufferState* loadBufferWithChanges(::apple::laf::JRSUIControl$ThreadLocalByteBuffer* localByteBuffer);
	void paint($ints* data, int32_t imgW, int32_t imgH, double x, double y, double w, double h);
	void paint(int64_t cgContext, double x, double y, double w, double h);
	static int32_t paintChangesImage($ints* data, int32_t imgW, int32_t imgH, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int64_t byteBufferPtr);
	static int32_t paintChangesToCGContext(int64_t cgContext, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h, int64_t byteBufferPtr);
	static int32_t paintImage($ints* data, int32_t imgW, int32_t imgH, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h);
	int32_t paintImage($ints* data, int32_t imgW, int32_t imgH, double x, double y, double w, double h);
	static int32_t paintToCGContext(int64_t cgContext, int64_t cfDictionaryPtr, int64_t oldProperties, int64_t newProperties, double x, double y, double w, double h);
	int32_t paintToCGContext(int64_t cgContext, double x, double y, double w, double h);
	void set(::apple::laf::JRSUIConstants$Key* key, ::apple::laf::JRSUIConstants$DoubleValue* value);
	void set(::apple::laf::JRSUIState* state);
	void set(::apple::laf::JRSUIConstants$Key* key, double value);
	void setEncodedState(int64_t state);
	void sync();
	static int32_t syncChanges(int64_t cfDictionaryPtr, int64_t byteBufferPtr);
	virtual $String* toString() override;
	static const int32_t INCOHERENT = 2;
	static const int32_t NOT_INIT = 1;
	static const int32_t SUCCESS = 0;
	static const int32_t NULL_PTR = (-1);
	static const int32_t NULL_CG_REF = (-2);
	static int32_t nativeJRSInitialized;
	static const int32_t NIO_BUFFER_SIZE = 128;
	static ::java::lang::ThreadLocal* threadLocal;
	::java::util::HashMap* nativeMap = nullptr;
	::java::util::HashMap* changes = nullptr;
	int64_t cfDictionaryPtr = 0;
	int64_t priorEncodedProperties = 0;
	int64_t currentEncodedProperties = 0;
	bool flipped = false;
};

	} // laf
} // apple

#pragma pop_macro("INCOHERENT")
#pragma pop_macro("NIO_BUFFER_SIZE")
#pragma pop_macro("NOT_INIT")
#pragma pop_macro("NULL_CG_REF")
#pragma pop_macro("NULL_PTR")
#pragma pop_macro("SUCCESS")

#endif // _apple_laf_JRSUIControl_h_