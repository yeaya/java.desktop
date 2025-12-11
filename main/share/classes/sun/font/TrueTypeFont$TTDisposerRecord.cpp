#include <sun/font/TrueTypeFont$TTDisposerRecord.h>

#include <java/io/IOException.h>
#include <java/nio/channels/FileChannel.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;

namespace sun {
	namespace font {

$FieldInfo _TrueTypeFont$TTDisposerRecord_FieldInfo_[] = {
	{"channel", "Ljava/nio/channels/FileChannel;", nullptr, 0, $field(TrueTypeFont$TTDisposerRecord, channel)},
	{}
};

$MethodInfo _TrueTypeFont$TTDisposerRecord_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeFont$TTDisposerRecord::*)()>(&TrueTypeFont$TTDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _TrueTypeFont$TTDisposerRecord_InnerClassesInfo_[] = {
	{"sun.font.TrueTypeFont$TTDisposerRecord", "sun.font.TrueTypeFont", "TTDisposerRecord", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TrueTypeFont$TTDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.TrueTypeFont$TTDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_TrueTypeFont$TTDisposerRecord_FieldInfo_,
	_TrueTypeFont$TTDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_TrueTypeFont$TTDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.TrueTypeFont"
};

$Object* allocate$TrueTypeFont$TTDisposerRecord($Class* clazz) {
	return $of($alloc(TrueTypeFont$TTDisposerRecord));
}

void TrueTypeFont$TTDisposerRecord::init$() {
	$set(this, channel, nullptr);
}

void TrueTypeFont$TTDisposerRecord::dispose() {
	$synchronized(this) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (this->channel != nullptr) {
						$nc(this->channel)->close();
					}
				} catch ($IOException& e) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, channel, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

TrueTypeFont$TTDisposerRecord::TrueTypeFont$TTDisposerRecord() {
}

$Class* TrueTypeFont$TTDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(TrueTypeFont$TTDisposerRecord, name, initialize, &_TrueTypeFont$TTDisposerRecord_ClassInfo_, allocate$TrueTypeFont$TTDisposerRecord);
	return class$;
}

$Class* TrueTypeFont$TTDisposerRecord::class$ = nullptr;

	} // font
} // sun