#include <sun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry.h>

#include <sun/awt/X11/XDropTargetProtocol.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetProtocol$EmbedderRegistryEntry_FieldInfo_[] = {
	{"overriden", "Z", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol$EmbedderRegistryEntry, overriden)},
	{"version", "I", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol$EmbedderRegistryEntry, version)},
	{"proxy", "J", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol$EmbedderRegistryEntry, proxy)},
	{}
};

$MethodInfo _XDropTargetProtocol$EmbedderRegistryEntry_MethodInfo_[] = {
	{"<init>", "(ZIJ)V", nullptr, 0, $method(static_cast<void(XDropTargetProtocol$EmbedderRegistryEntry::*)(bool,int32_t,int64_t)>(&XDropTargetProtocol$EmbedderRegistryEntry::init$))},
	{"getProxy", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(XDropTargetProtocol$EmbedderRegistryEntry::*)()>(&XDropTargetProtocol$EmbedderRegistryEntry::getProxy))},
	{"getVersion", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(XDropTargetProtocol$EmbedderRegistryEntry::*)()>(&XDropTargetProtocol$EmbedderRegistryEntry::getVersion))},
	{"isOverriden", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XDropTargetProtocol$EmbedderRegistryEntry::*)()>(&XDropTargetProtocol$EmbedderRegistryEntry::isOverriden))},
	{}
};

$InnerClassInfo _XDropTargetProtocol$EmbedderRegistryEntry_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry", "sun.awt.X11.XDropTargetProtocol", "EmbedderRegistryEntry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XDropTargetProtocol$EmbedderRegistryEntry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry",
	"java.lang.Object",
	nullptr,
	_XDropTargetProtocol$EmbedderRegistryEntry_FieldInfo_,
	_XDropTargetProtocol$EmbedderRegistryEntry_MethodInfo_,
	nullptr,
	nullptr,
	_XDropTargetProtocol$EmbedderRegistryEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetProtocol"
};

$Object* allocate$XDropTargetProtocol$EmbedderRegistryEntry($Class* clazz) {
	return $of($alloc(XDropTargetProtocol$EmbedderRegistryEntry));
}

void XDropTargetProtocol$EmbedderRegistryEntry::init$(bool overriden, int32_t version, int64_t proxy) {
	this->overriden = overriden;
	this->version = version;
	this->proxy = proxy;
}

bool XDropTargetProtocol$EmbedderRegistryEntry::isOverriden() {
	return this->overriden;
}

int32_t XDropTargetProtocol$EmbedderRegistryEntry::getVersion() {
	return this->version;
}

int64_t XDropTargetProtocol$EmbedderRegistryEntry::getProxy() {
	return this->proxy;
}

XDropTargetProtocol$EmbedderRegistryEntry::XDropTargetProtocol$EmbedderRegistryEntry() {
}

$Class* XDropTargetProtocol$EmbedderRegistryEntry::load$($String* name, bool initialize) {
	$loadClass(XDropTargetProtocol$EmbedderRegistryEntry, name, initialize, &_XDropTargetProtocol$EmbedderRegistryEntry_ClassInfo_, allocate$XDropTargetProtocol$EmbedderRegistryEntry);
	return class$;
}

$Class* XDropTargetProtocol$EmbedderRegistryEntry::class$ = nullptr;

		} // X11
	} // awt
} // sun