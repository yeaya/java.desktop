#include <sun/awt/X11/XPropertyCache$PropertyCacheEntry.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/XPropertyCache.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XPropertyCache$PropertyCacheEntry_FieldInfo_[] = {
	{"format", "I", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, format)},
	{"numberOfItems", "I", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, numberOfItems)},
	{"bytesAfter", "J", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, bytesAfter)},
	{"data", "J", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, data)},
	{"dataLength", "I", nullptr, $PRIVATE | $FINAL, $field(XPropertyCache$PropertyCacheEntry, dataLength)},
	{}
};

$MethodInfo _XPropertyCache$PropertyCacheEntry_MethodInfo_[] = {
	{"<init>", "(IIJJI)V", nullptr, $PUBLIC, $method(static_cast<void(XPropertyCache$PropertyCacheEntry::*)(int32_t,int32_t,int64_t,int64_t,int32_t)>(&XPropertyCache$PropertyCacheEntry::init$))},
	{"getBytesAfter", "()J", nullptr, $PUBLIC},
	{"getData", "()J", nullptr, $PUBLIC},
	{"getDataLength", "()I", nullptr, $PUBLIC},
	{"getFormat", "()I", nullptr, $PUBLIC},
	{"getNumberOfItems", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPropertyCache$PropertyCacheEntry_InnerClassesInfo_[] = {
	{"sun.awt.X11.XPropertyCache$PropertyCacheEntry", "sun.awt.X11.XPropertyCache", "PropertyCacheEntry", $STATIC},
	{}
};

$ClassInfo _XPropertyCache$PropertyCacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XPropertyCache$PropertyCacheEntry",
	"java.lang.Object",
	nullptr,
	_XPropertyCache$PropertyCacheEntry_FieldInfo_,
	_XPropertyCache$PropertyCacheEntry_MethodInfo_,
	nullptr,
	nullptr,
	_XPropertyCache$PropertyCacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XPropertyCache"
};

$Object* allocate$XPropertyCache$PropertyCacheEntry($Class* clazz) {
	return $of($alloc(XPropertyCache$PropertyCacheEntry));
}

void XPropertyCache$PropertyCacheEntry::init$(int32_t format, int32_t numberOfItems, int64_t bytesAfter, int64_t data, int32_t dataLength) {
	this->format = format;
	this->numberOfItems = numberOfItems;
	this->bytesAfter = bytesAfter;
	$init($XlibWrapper);
	this->data = $nc($XlibWrapper::unsafe)->allocateMemory(dataLength);
	this->dataLength = dataLength;
	$XlibWrapper::memcpy(this->data, data, dataLength);
}

int32_t XPropertyCache$PropertyCacheEntry::getFormat() {
	return this->format;
}

int32_t XPropertyCache$PropertyCacheEntry::getNumberOfItems() {
	return this->numberOfItems;
}

int64_t XPropertyCache$PropertyCacheEntry::getBytesAfter() {
	return this->bytesAfter;
}

int64_t XPropertyCache$PropertyCacheEntry::getData() {
	return this->data;
}

int32_t XPropertyCache$PropertyCacheEntry::getDataLength() {
	return this->dataLength;
}

XPropertyCache$PropertyCacheEntry::XPropertyCache$PropertyCacheEntry() {
}

$Class* XPropertyCache$PropertyCacheEntry::load$($String* name, bool initialize) {
	$loadClass(XPropertyCache$PropertyCacheEntry, name, initialize, &_XPropertyCache$PropertyCacheEntry_ClassInfo_, allocate$XPropertyCache$PropertyCacheEntry);
	return class$;
}

$Class* XPropertyCache$PropertyCacheEntry::class$ = nullptr;

		} // X11
	} // awt
} // sun