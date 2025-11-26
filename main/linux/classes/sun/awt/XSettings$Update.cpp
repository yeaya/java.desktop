#include <sun/awt/XSettings$Update.h>

#include <java/awt/Color.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/XSettings.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN
#undef TYPE_COLOR
#undef TYPE_INTEGER
#undef TYPE_STRING

using $Color = ::java::awt::Color;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $XSettings = ::sun::awt::XSettings;

namespace sun {
	namespace awt {

$FieldInfo _XSettings$Update_FieldInfo_[] = {
	{"this$0", "Lsun/awt/XSettings;", nullptr, $FINAL | $SYNTHETIC, $field(XSettings$Update, this$0)},
	{"LITTLE_ENDIAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSettings$Update, LITTLE_ENDIAN)},
	{"BIG_ENDIAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSettings$Update, BIG_ENDIAN)},
	{"TYPE_INTEGER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSettings$Update, TYPE_INTEGER)},
	{"TYPE_STRING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSettings$Update, TYPE_STRING)},
	{"TYPE_COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSettings$Update, TYPE_COLOR)},
	{"data", "[B", nullptr, $PRIVATE, $field(XSettings$Update, data)},
	{"dlen", "I", nullptr, $PRIVATE, $field(XSettings$Update, dlen)},
	{"idx", "I", nullptr, $PRIVATE, $field(XSettings$Update, idx)},
	{"isLittle", "Z", nullptr, $PRIVATE, $field(XSettings$Update, isLittle)},
	{"serial", "J", nullptr, $PRIVATE, $field(XSettings$Update, serial)},
	{"nsettings", "I", nullptr, $PRIVATE, $field(XSettings$Update, nsettings)},
	{"isValid", "Z", nullptr, $PRIVATE, $field(XSettings$Update, isValid)},
	{"updatedSettings", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(XSettings$Update, updatedSettings)},
	{}
};

$MethodInfo _XSettings$Update_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/XSettings;[B)V", nullptr, 0, $method(static_cast<void(XSettings$Update::*)($XSettings*,$bytes*)>(&XSettings$Update::init$))},
	{"getCARD16", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(XSettings$Update::*)()>(&XSettings$Update::getCARD16)), "java.lang.IndexOutOfBoundsException"},
	{"getCARD32", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(XSettings$Update::*)()>(&XSettings$Update::getCARD32)), "java.lang.IndexOutOfBoundsException"},
	{"getCARD8", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(XSettings$Update::*)()>(&XSettings$Update::getCARD8)), "java.lang.IndexOutOfBoundsException"},
	{"getINT32", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(XSettings$Update::*)()>(&XSettings$Update::getINT32)), "java.lang.IndexOutOfBoundsException"},
	{"getString", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(XSettings$Update::*)(int32_t)>(&XSettings$Update::getString)), "java.lang.IndexOutOfBoundsException"},
	{"needBytes", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(XSettings$Update::*)(int32_t)>(&XSettings$Update::needBytes)), "java.lang.IndexOutOfBoundsException"},
	{"update", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{"updateOne", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(XSettings$Update::*)(int64_t)>(&XSettings$Update::updateOne)), "java.lang.IndexOutOfBoundsException,java.lang.IllegalArgumentException"},
	{}
};

$InnerClassInfo _XSettings$Update_InnerClassesInfo_[] = {
	{"sun.awt.XSettings$Update", "sun.awt.XSettings", "Update", 0},
	{}
};

$ClassInfo _XSettings$Update_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.XSettings$Update",
	"java.lang.Object",
	nullptr,
	_XSettings$Update_FieldInfo_,
	_XSettings$Update_MethodInfo_,
	nullptr,
	nullptr,
	_XSettings$Update_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.XSettings"
};

$Object* allocate$XSettings$Update($Class* clazz) {
	return $of($alloc(XSettings$Update));
}

void XSettings$Update::init$($XSettings* this$0, $bytes* data) {
	$set(this, this$0, this$0);
	this->serial = -1;
	this->nsettings = 0;
	$set(this, data, data);
	this->dlen = $nc(data)->length;
	if (this->dlen < 12) {
		return;
	}
	this->idx = 0;
	this->isLittle = (getCARD8() == XSettings$Update::LITTLE_ENDIAN);
	this->idx = 4;
	this->serial = getCARD32();
	this->idx = 8;
	this->nsettings = getINT32();
	$set(this, updatedSettings, $new($HashMap));
	this->isValid = true;
}

void XSettings$Update::needBytes(int32_t n) {
	$useLocalCurrentObjectStackCache();
	if (this->idx + n <= this->dlen) {
		return;
	}
	$throwNew($IndexOutOfBoundsException, $$str({"at "_s, $$str(this->idx), " need "_s, $$str(n), " length "_s, $$str(this->dlen)}));
}

int32_t XSettings$Update::getCARD8() {
	needBytes(1);
	int32_t val = (int32_t)($nc(this->data)->get(this->idx) & (uint32_t)255);
	++this->idx;
	return val;
}

int32_t XSettings$Update::getCARD16() {
	needBytes(2);
	int32_t val = 0;
	if (this->isLittle) {
		val = ((int32_t)($nc(this->data)->get(this->idx + 0) & (uint32_t)255)) | (((int32_t)($nc(this->data)->get(this->idx + 1) & (uint32_t)255)) << 8);
	} else {
		val = (((int32_t)($nc(this->data)->get(this->idx + 0) & (uint32_t)255)) << 8) | ((int32_t)($nc(this->data)->get(this->idx + 1) & (uint32_t)255));
	}
	this->idx += 2;
	return val;
}

int32_t XSettings$Update::getINT32() {
	needBytes(4);
	int32_t val = 0;
	if (this->isLittle) {
		val = ((((int32_t)($nc(this->data)->get(this->idx + 0) & (uint32_t)255)) | (((int32_t)($nc(this->data)->get(this->idx + 1) & (uint32_t)255)) << 8)) | (((int32_t)($nc(this->data)->get(this->idx + 2) & (uint32_t)255)) << 16)) | (((int32_t)($nc(this->data)->get(this->idx + 3) & (uint32_t)255)) << 24);
	} else {
		val = (((((int32_t)($nc(this->data)->get(this->idx + 0) & (uint32_t)255)) << 24) | (((int32_t)($nc(this->data)->get(this->idx + 1) & (uint32_t)255)) << 16)) | (((int32_t)($nc(this->data)->get(this->idx + 2) & (uint32_t)255)) << 8)) | (((int32_t)($nc(this->data)->get(this->idx + 3) & (uint32_t)255)) << 0);
	}
	this->idx += 4;
	return val;
}

int64_t XSettings$Update::getCARD32() {
	return (int64_t)(getINT32() & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

$String* XSettings$Update::getString(int32_t len) {
	needBytes(len);
	$var($String, str, nullptr);
	try {
		$assign(str, $new($String, this->data, this->idx, len, "UTF-8"_s));
	} catch ($UnsupportedEncodingException& e) {
	}
	this->idx = (int32_t)((this->idx + len + 3) & (uint32_t)~3);
	return str;
}

$Map* XSettings$Update::update() {
	if (!this->isValid) {
		return nullptr;
	}
	$synchronized(this->this$0) {
		int64_t currentSerial = this->this$0->serial;
		if (this->serial <= currentSerial) {
			return nullptr;
		}
		for (int32_t i = 0; i < this->nsettings && this->idx < this->dlen; ++i) {
			updateOne(currentSerial);
		}
		this->this$0->serial = this->serial;
	}
	return this->updatedSettings;
}

void XSettings$Update::updateOne(int64_t currentSerial) {
	$useLocalCurrentObjectStackCache();
	int32_t type = getCARD8();
	++this->idx;
	int32_t nameLen = getCARD16();
	int32_t nameIdx = this->idx;
	this->idx = (int32_t)((this->idx + nameLen + 3) & (uint32_t)~3);
	int64_t lastChanged = getCARD32();
	if (lastChanged <= currentSerial) {
		if (type == XSettings$Update::TYPE_INTEGER) {
			this->idx += 4;
		} else if (type == XSettings$Update::TYPE_STRING) {
			int32_t len = getINT32();
			this->idx = (int32_t)((this->idx + len + 3) & (uint32_t)~3);
		} else if (type == XSettings$Update::TYPE_COLOR) {
			this->idx += 8;
		} else {
			$throwNew($IllegalArgumentException, $$str({"Unknown type: "_s, $$str(type)}));
		}
		return;
	}
	this->idx = nameIdx;
	$var($String, name, getString(nameLen));
	this->idx += 4;
	$var($Object, value, nullptr);
	if (type == XSettings$Update::TYPE_INTEGER) {
		$assign(value, $Integer::valueOf(getINT32()));
	} else if (type == XSettings$Update::TYPE_STRING) {
		$assign(value, getString(getINT32()));
	} else if (type == XSettings$Update::TYPE_COLOR) {
		int32_t r = getCARD16();
		int32_t g = getCARD16();
		int32_t b = getCARD16();
		int32_t a = getCARD16();
		$assign(value, $new($Color, r / 65535.0f, g / 65535.0f, b / 65535.0f, a / 65535.0f));
	} else {
		$throwNew($IllegalArgumentException, $$str({"Unknown type: "_s, $$str(type)}));
	}
	if (name == nullptr) {
		return;
	}
	$nc(this->updatedSettings)->put(name, value);
}

XSettings$Update::XSettings$Update() {
}

$Class* XSettings$Update::load$($String* name, bool initialize) {
	$loadClass(XSettings$Update, name, initialize, &_XSettings$Update_ClassInfo_, allocate$XSettings$Update);
	return class$;
}

$Class* XSettings$Update::class$ = nullptr;

	} // awt
} // sun