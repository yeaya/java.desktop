#include <sun/font/AttributeValues.h>

#include <java/awt/Font.h>
#include <java/awt/Paint.h>
#include <java/awt/Toolkit.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TransformAttribute.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/im/InputMethodHighlight.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/text/Annotation.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/font/AttributeMap.h>
#include <sun/font/AttributeValues$1.h>
#include <sun/font/EAttribute.h>
#include <jcpp.h>

#undef DEFAULT
#undef DEFINED_KEY
#undef EBACKGROUND
#undef EBASELINE_TRANSFORM
#undef EBIDI_EMBEDDING
#undef ECHAR_REPLACEMENT
#undef EFAMILY
#undef EFONT
#undef EFOREGROUND
#undef EINPUT_METHOD_HIGHLIGHT
#undef EINPUT_METHOD_UNDERLINE
#undef EJUSTIFICATION
#undef EKERNING
#undef ELIGATURES
#undef ENUMERIC_SHAPING
#undef EPOSTURE
#undef ERUN_DIRECTION
#undef ESIZE
#undef ESTRIKETHROUGH
#undef ESUPERSCRIPT
#undef ESWAP_COLORS
#undef ETRACKING
#undef ETRANSFORM
#undef EUNDERLINE
#undef EWEIGHT
#undef EWIDTH
#undef IDENTITY
#undef JUSTIFICATION
#undef MASK_ALL
#undef NUMERIC_SHAPING
#undef RUN_DIRECTION_LTR
#undef RUN_DIRECTION_RTL
#undef TRANSFORM

using $EAttributeArray = $Array<::sun::font::EAttribute>;
using $Font = ::java::awt::Font;
using $Paint = ::java::awt::Paint;
using $Toolkit = ::java::awt::Toolkit;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $NumericShaper = ::java::awt::font::NumericShaper;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TransformAttribute = ::java::awt::font::TransformAttribute;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $InputMethodHighlight = ::java::awt::im::InputMethodHighlight;
using $Serializable = ::java::io::Serializable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Annotation = ::java::text::Annotation;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $AttributeMap = ::sun::font::AttributeMap;
using $AttributeValues$1 = ::sun::font::AttributeValues$1;
using $EAttribute = ::sun::font::EAttribute;

namespace sun {
	namespace font {

$FieldInfo _AttributeValues_FieldInfo_[] = {
	{"defined", "I", nullptr, $PRIVATE, $field(AttributeValues, defined)},
	{"nondefault", "I", nullptr, $PRIVATE, $field(AttributeValues, nondefault)},
	{"family", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AttributeValues, family)},
	{"weight", "F", nullptr, $PRIVATE, $field(AttributeValues, weight)},
	{"width", "F", nullptr, $PRIVATE, $field(AttributeValues, width)},
	{"posture", "F", nullptr, $PRIVATE, $field(AttributeValues, posture)},
	{"size", "F", nullptr, $PRIVATE, $field(AttributeValues, size)},
	{"tracking", "F", nullptr, $PRIVATE, $field(AttributeValues, tracking)},
	{"numericShaping", "Ljava/awt/font/NumericShaper;", nullptr, $PRIVATE, $field(AttributeValues, numericShaping)},
	{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(AttributeValues, transform)},
	{"charReplacement", "Ljava/awt/font/GraphicAttribute;", nullptr, $PRIVATE, $field(AttributeValues, charReplacement)},
	{"foreground", "Ljava/awt/Paint;", nullptr, $PRIVATE, $field(AttributeValues, foreground)},
	{"background", "Ljava/awt/Paint;", nullptr, $PRIVATE, $field(AttributeValues, background)},
	{"justification", "F", nullptr, $PRIVATE, $field(AttributeValues, justification)},
	{"imHighlight", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AttributeValues, imHighlight)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(AttributeValues, font)},
	{"imUnderline", "B", nullptr, $PRIVATE, $field(AttributeValues, imUnderline)},
	{"superscript", "B", nullptr, $PRIVATE, $field(AttributeValues, superscript)},
	{"underline", "B", nullptr, $PRIVATE, $field(AttributeValues, underline)},
	{"runDirection", "B", nullptr, $PRIVATE, $field(AttributeValues, runDirection)},
	{"bidiEmbedding", "B", nullptr, $PRIVATE, $field(AttributeValues, bidiEmbedding)},
	{"kerning", "B", nullptr, $PRIVATE, $field(AttributeValues, kerning)},
	{"ligatures", "B", nullptr, $PRIVATE, $field(AttributeValues, ligatures)},
	{"strikethrough", "Z", nullptr, $PRIVATE, $field(AttributeValues, strikethrough)},
	{"swapColors", "Z", nullptr, $PRIVATE, $field(AttributeValues, swapColors)},
	{"baselineTransform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(AttributeValues, baselineTransform)},
	{"charTransform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(AttributeValues, charTransform)},
	{"DEFAULT", "Lsun/font/AttributeValues;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeValues, DEFAULT)},
	{"MASK_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AttributeValues, MASK_ALL)},
	{"DEFINED_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeValues, DEFINED_KEY)},
	{}
};

$MethodInfo _AttributeValues_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)()>(&AttributeValues::init$))},
	{"allDefined", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)(int32_t)>(&AttributeValues::allDefined))},
	{"anyDefined", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)(int32_t)>(&AttributeValues::anyDefined))},
	{"anyNonDefault", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)(int32_t)>(&AttributeValues::anyNonDefault))},
	{"applyIMHighlight", "()Lsun/font/AttributeValues;", nullptr, $PUBLIC, $method(static_cast<AttributeValues*(AttributeValues::*)()>(&AttributeValues::applyIMHighlight))},
	{"clone", "()Lsun/font/AttributeValues;", nullptr, $PUBLIC},
	{"defineAll", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::defineAll))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Lsun/font/AttributeValues;)Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)(AttributeValues*)>(&AttributeValues::equals))},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&AttributeValues::equals))},
	{"extractRotation", "(Ljava/awt/geom/Point2D$Double;Ljava/awt/geom/AffineTransform;Z)Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AffineTransform*(*)($Point2D$Double*,$AffineTransform*,bool)>(&AttributeValues::extractRotation))},
	{"extractXRotation", "(Ljava/awt/geom/AffineTransform;Z)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AffineTransform*(*)($AffineTransform*,bool)>(&AttributeValues::extractXRotation))},
	{"extractYRotation", "(Ljava/awt/geom/AffineTransform;Z)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AffineTransform*(*)($AffineTransform*,bool)>(&AttributeValues::extractYRotation))},
	{"fromMap", "(Ljava/util/Map;)Lsun/font/AttributeValues;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Lsun/font/AttributeValues;", $PUBLIC | $STATIC, $method(static_cast<AttributeValues*(*)($Map*)>(&AttributeValues::fromMap))},
	{"fromMap", "(Ljava/util/Map;I)Lsun/font/AttributeValues;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;I)Lsun/font/AttributeValues;", $PUBLIC | $STATIC, $method(static_cast<AttributeValues*(*)($Map*,int32_t)>(&AttributeValues::fromMap))},
	{"fromSerializableHashtable", "(Ljava/util/Hashtable;)Lsun/font/AttributeValues;", "(Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;)Lsun/font/AttributeValues;", $PUBLIC | $STATIC, $method(static_cast<AttributeValues*(*)($Hashtable*)>(&AttributeValues::fromSerializableHashtable))},
	{"get", "(Lsun/font/EAttribute;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(AttributeValues::*)($EAttribute*)>(&AttributeValues::get))},
	{"getBackground", "()Ljava/awt/Paint;", nullptr, $PUBLIC, $method(static_cast<$Paint*(AttributeValues::*)()>(&AttributeValues::getBackground))},
	{"getBaselineTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $method(static_cast<$AffineTransform*(AttributeValues::*)()>(&AttributeValues::getBaselineTransform))},
	{"getBaselineTransform", "(Ljava/util/Map;)Ljava/awt/geom/AffineTransform;", "(Ljava/util/Map<**>;)Ljava/awt/geom/AffineTransform;", $PUBLIC | $STATIC, $method(static_cast<$AffineTransform*(*)($Map*)>(&AttributeValues::getBaselineTransform))},
	{"getBidiEmbedding", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getBidiEmbedding))},
	{"getCharReplacement", "()Ljava/awt/font/GraphicAttribute;", nullptr, $PUBLIC, $method(static_cast<$GraphicAttribute*(AttributeValues::*)()>(&AttributeValues::getCharReplacement))},
	{"getCharTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $method(static_cast<$AffineTransform*(AttributeValues::*)()>(&AttributeValues::getCharTransform))},
	{"getCharTransform", "(Ljava/util/Map;)Ljava/awt/geom/AffineTransform;", "(Ljava/util/Map<**>;)Ljava/awt/geom/AffineTransform;", $PUBLIC | $STATIC, $method(static_cast<$AffineTransform*(*)($Map*)>(&AttributeValues::getCharTransform))},
	{"getFamily", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(AttributeValues::*)()>(&AttributeValues::getFamily))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $method(static_cast<$Font*(AttributeValues::*)()>(&AttributeValues::getFont))},
	{"getForeground", "()Ljava/awt/Paint;", nullptr, $PUBLIC, $method(static_cast<$Paint*(AttributeValues::*)()>(&AttributeValues::getForeground))},
	{"getInputMethodHighlight", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(AttributeValues::*)()>(&AttributeValues::getInputMethodHighlight))},
	{"getInputMethodUnderline", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getInputMethodUnderline))},
	{"getJustification", "()F", nullptr, $PUBLIC, $method(static_cast<float(AttributeValues::*)()>(&AttributeValues::getJustification))},
	{"getJustification", "(Ljava/util/Map;)F", "(Ljava/util/Map<**>;)F", $PUBLIC | $STATIC, $method(static_cast<float(*)($Map*)>(&AttributeValues::getJustification))},
	{"getKerning", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getKerning))},
	{"getLigatures", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getLigatures))},
	{"getMask", "(Lsun/font/EAttribute;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($EAttribute*)>(&AttributeValues::getMask))},
	{"getMask", "([Lsun/font/EAttribute;)I", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<int32_t(*)($EAttributeArray*)>(&AttributeValues::getMask))},
	{"getNumericShaping", "()Ljava/awt/font/NumericShaper;", nullptr, $PUBLIC, $method(static_cast<$NumericShaper*(AttributeValues::*)()>(&AttributeValues::getNumericShaping))},
	{"getNumericShaping", "(Ljava/util/Map;)Ljava/awt/font/NumericShaper;", "(Ljava/util/Map<**>;)Ljava/awt/font/NumericShaper;", $PUBLIC | $STATIC, $method(static_cast<$NumericShaper*(*)($Map*)>(&AttributeValues::getNumericShaping))},
	{"getPosture", "()F", nullptr, $PUBLIC, $method(static_cast<float(AttributeValues::*)()>(&AttributeValues::getPosture))},
	{"getRunDirection", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getRunDirection))},
	{"getSize", "()F", nullptr, $PUBLIC, $method(static_cast<float(AttributeValues::*)()>(&AttributeValues::getSize))},
	{"getStrikethrough", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)()>(&AttributeValues::getStrikethrough))},
	{"getSuperscript", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getSuperscript))},
	{"getSwapColors", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)()>(&AttributeValues::getSwapColors))},
	{"getTracking", "()F", nullptr, $PUBLIC, $method(static_cast<float(AttributeValues::*)()>(&AttributeValues::getTracking))},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $method(static_cast<$AffineTransform*(AttributeValues::*)()>(&AttributeValues::getTransform))},
	{"getUnderline", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(AttributeValues::*)()>(&AttributeValues::getUnderline))},
	{"getWeight", "()F", nullptr, $PUBLIC, $method(static_cast<float(AttributeValues::*)()>(&AttributeValues::getWeight))},
	{"getWidth", "()F", nullptr, $PUBLIC, $method(static_cast<float(AttributeValues::*)()>(&AttributeValues::getWidth))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"i_equals", "(Lsun/font/EAttribute;Lsun/font/AttributeValues;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AttributeValues::*)($EAttribute*,AttributeValues*)>(&AttributeValues::i_equals))},
	{"i_get", "(Lsun/font/EAttribute;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(AttributeValues::*)($EAttribute*)>(&AttributeValues::i_get))},
	{"i_set", "(Lsun/font/EAttribute;Lsun/font/AttributeValues;)V", nullptr, $PRIVATE, $method(static_cast<void(AttributeValues::*)($EAttribute*,AttributeValues*)>(&AttributeValues::i_set))},
	{"i_set", "(Lsun/font/EAttribute;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AttributeValues::*)($EAttribute*,Object$*)>(&AttributeValues::i_set))},
	{"i_validate", "(Lsun/font/EAttribute;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AttributeValues::*)($EAttribute*)>(&AttributeValues::i_validate))},
	{"is16Hashtable", "(Ljava/util/Hashtable;)Z", "(Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Hashtable*)>(&AttributeValues::is16Hashtable))},
	{"isDefined", "(Lsun/font/EAttribute;)Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)($EAttribute*)>(&AttributeValues::isDefined))},
	{"isNonDefault", "(Lsun/font/EAttribute;)Z", nullptr, $PUBLIC, $method(static_cast<bool(AttributeValues::*)($EAttribute*)>(&AttributeValues::isNonDefault))},
	{"merge", "(Ljava/util/Map;)Lsun/font/AttributeValues;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Lsun/font/AttributeValues;", $PUBLIC, $method(static_cast<AttributeValues*(AttributeValues::*)($Map*)>(&AttributeValues::merge))},
	{"merge", "(Ljava/util/Map;I)Lsun/font/AttributeValues;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;I)Lsun/font/AttributeValues;", $PUBLIC, $method(static_cast<AttributeValues*(AttributeValues::*)($Map*,int32_t)>(&AttributeValues::merge))},
	{"merge", "(Lsun/font/AttributeValues;)Lsun/font/AttributeValues;", nullptr, $PUBLIC, $method(static_cast<AttributeValues*(AttributeValues::*)(AttributeValues*)>(&AttributeValues::merge))},
	{"merge", "(Lsun/font/AttributeValues;I)Lsun/font/AttributeValues;", nullptr, $PUBLIC, $method(static_cast<AttributeValues*(AttributeValues::*)(AttributeValues*,int32_t)>(&AttributeValues::merge))},
	{"set", "(Lsun/font/EAttribute;Lsun/font/AttributeValues;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($EAttribute*,AttributeValues*)>(&AttributeValues::set))},
	{"set", "(Lsun/font/EAttribute;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($EAttribute*,Object$*)>(&AttributeValues::set))},
	{"setBackground", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($Paint*)>(&AttributeValues::setBackground))},
	{"setBidiEmbedding", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setBidiEmbedding))},
	{"setCharReplacement", "(Ljava/awt/font/GraphicAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($GraphicAttribute*)>(&AttributeValues::setCharReplacement))},
	{"setDefault", "(Lsun/font/EAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($EAttribute*)>(&AttributeValues::setDefault))},
	{"setFamily", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($String*)>(&AttributeValues::setFamily))},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($Font*)>(&AttributeValues::setFont))},
	{"setForeground", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($Paint*)>(&AttributeValues::setForeground))},
	{"setInputMethodHighlight", "(Ljava/text/Annotation;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($Annotation*)>(&AttributeValues::setInputMethodHighlight))},
	{"setInputMethodHighlight", "(Ljava/awt/im/InputMethodHighlight;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($InputMethodHighlight*)>(&AttributeValues::setInputMethodHighlight))},
	{"setInputMethodUnderline", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setInputMethodUnderline))},
	{"setJustification", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(float)>(&AttributeValues::setJustification))},
	{"setKerning", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setKerning))},
	{"setLigatures", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setLigatures))},
	{"setNumericShaping", "(Ljava/awt/font/NumericShaper;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($NumericShaper*)>(&AttributeValues::setNumericShaping))},
	{"setPosture", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(float)>(&AttributeValues::setPosture))},
	{"setRunDirection", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setRunDirection))},
	{"setSize", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(float)>(&AttributeValues::setSize))},
	{"setStrikethrough", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(bool)>(&AttributeValues::setStrikethrough))},
	{"setSuperscript", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setSuperscript))},
	{"setSwapColors", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(bool)>(&AttributeValues::setSwapColors))},
	{"setTracking", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(float)>(&AttributeValues::setTracking))},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($AffineTransform*)>(&AttributeValues::setTransform))},
	{"setTransform", "(Ljava/awt/font/TransformAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($TransformAttribute*)>(&AttributeValues::setTransform))},
	{"setUnderline", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(int32_t)>(&AttributeValues::setUnderline))},
	{"setWeight", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(float)>(&AttributeValues::setWeight))},
	{"setWidth", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)(float)>(&AttributeValues::setWidth))},
	{"toMap", "(Ljava/util/Map;)Ljava/util/Map;", "(Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;)Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;", $PUBLIC, $method(static_cast<$Map*(AttributeValues::*)($Map*)>(&AttributeValues::toMap))},
	{"toSerializableHashtable", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC, $method(static_cast<$Hashtable*(AttributeValues::*)()>(&AttributeValues::toSerializableHashtable))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unset", "(Lsun/font/EAttribute;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)($EAttribute*)>(&AttributeValues::unset))},
	{"unsetDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)()>(&AttributeValues::unsetDefault))},
	{"update", "(Lsun/font/EAttribute;)V", nullptr, $PRIVATE, $method(static_cast<void(AttributeValues::*)($EAttribute*)>(&AttributeValues::update))},
	{"updateDerivedTransforms", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeValues::*)()>(&AttributeValues::updateDerivedTransforms))},
	{}
};

$InnerClassInfo _AttributeValues_InnerClassesInfo_[] = {
	{"sun.font.AttributeValues$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _AttributeValues_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.AttributeValues",
	"java.lang.Object",
	"java.lang.Cloneable",
	_AttributeValues_FieldInfo_,
	_AttributeValues_MethodInfo_,
	nullptr,
	nullptr,
	_AttributeValues_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.AttributeValues$1"
};

$Object* allocate$AttributeValues($Class* clazz) {
	return $of($alloc(AttributeValues));
}

AttributeValues* AttributeValues::DEFAULT = nullptr;
int32_t AttributeValues::MASK_ALL = 0;
$String* AttributeValues::DEFINED_KEY = nullptr;

void AttributeValues::init$() {
	$set(this, family, "Default"_s);
	this->weight = 1.0f;
	this->width = 1.0f;
	this->size = 12.0f;
	this->justification = 1.0f;
	this->imUnderline = (int8_t)-1;
	this->underline = (int8_t)-1;
	this->runDirection = (int8_t)-2;
}

$String* AttributeValues::getFamily() {
	return this->family;
}

void AttributeValues::setFamily($String* f) {
	$set(this, family, f);
	$init($EAttribute);
	update($EAttribute::EFAMILY);
}

float AttributeValues::getWeight() {
	return this->weight;
}

void AttributeValues::setWeight(float f) {
	this->weight = f;
	$init($EAttribute);
	update($EAttribute::EWEIGHT);
}

float AttributeValues::getWidth() {
	return this->width;
}

void AttributeValues::setWidth(float f) {
	this->width = f;
	$init($EAttribute);
	update($EAttribute::EWIDTH);
}

float AttributeValues::getPosture() {
	return this->posture;
}

void AttributeValues::setPosture(float f) {
	this->posture = f;
	$init($EAttribute);
	update($EAttribute::EPOSTURE);
}

float AttributeValues::getSize() {
	return this->size;
}

void AttributeValues::setSize(float f) {
	this->size = f;
	$init($EAttribute);
	update($EAttribute::ESIZE);
}

$AffineTransform* AttributeValues::getTransform() {
	return this->transform;
}

void AttributeValues::setTransform($AffineTransform* f) {
	$set(this, transform, (f == nullptr || $nc(f)->isIdentity()) ? $nc(AttributeValues::DEFAULT)->transform : $new($AffineTransform, f));
	updateDerivedTransforms();
	$init($EAttribute);
	update($EAttribute::ETRANSFORM);
}

void AttributeValues::setTransform($TransformAttribute* f) {
	$set(this, transform, (f == nullptr || $nc(f)->isIdentity()) ? $nc(AttributeValues::DEFAULT)->transform : $nc(f)->getTransform());
	updateDerivedTransforms();
	$init($EAttribute);
	update($EAttribute::ETRANSFORM);
}

int32_t AttributeValues::getSuperscript() {
	return this->superscript;
}

void AttributeValues::setSuperscript(int32_t f) {
	this->superscript = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::ESUPERSCRIPT);
}

$Font* AttributeValues::getFont() {
	return this->font;
}

void AttributeValues::setFont($Font* f) {
	$set(this, font, f);
	$init($EAttribute);
	update($EAttribute::EFONT);
}

$GraphicAttribute* AttributeValues::getCharReplacement() {
	return this->charReplacement;
}

void AttributeValues::setCharReplacement($GraphicAttribute* f) {
	$set(this, charReplacement, f);
	$init($EAttribute);
	update($EAttribute::ECHAR_REPLACEMENT);
}

$Paint* AttributeValues::getForeground() {
	return this->foreground;
}

void AttributeValues::setForeground($Paint* f) {
	$set(this, foreground, f);
	$init($EAttribute);
	update($EAttribute::EFOREGROUND);
}

$Paint* AttributeValues::getBackground() {
	return this->background;
}

void AttributeValues::setBackground($Paint* f) {
	$set(this, background, f);
	$init($EAttribute);
	update($EAttribute::EBACKGROUND);
}

int32_t AttributeValues::getUnderline() {
	return this->underline;
}

void AttributeValues::setUnderline(int32_t f) {
	this->underline = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::EUNDERLINE);
}

bool AttributeValues::getStrikethrough() {
	return this->strikethrough;
}

void AttributeValues::setStrikethrough(bool f) {
	this->strikethrough = f;
	$init($EAttribute);
	update($EAttribute::ESTRIKETHROUGH);
}

int32_t AttributeValues::getRunDirection() {
	return this->runDirection;
}

void AttributeValues::setRunDirection(int32_t f) {
	this->runDirection = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::ERUN_DIRECTION);
}

int32_t AttributeValues::getBidiEmbedding() {
	return this->bidiEmbedding;
}

void AttributeValues::setBidiEmbedding(int32_t f) {
	this->bidiEmbedding = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::EBIDI_EMBEDDING);
}

float AttributeValues::getJustification() {
	return this->justification;
}

void AttributeValues::setJustification(float f) {
	this->justification = f;
	$init($EAttribute);
	update($EAttribute::EJUSTIFICATION);
}

$Object* AttributeValues::getInputMethodHighlight() {
	return $of(this->imHighlight);
}

void AttributeValues::setInputMethodHighlight($Annotation* f) {
	$set(this, imHighlight, f);
	$init($EAttribute);
	update($EAttribute::EINPUT_METHOD_HIGHLIGHT);
}

void AttributeValues::setInputMethodHighlight($InputMethodHighlight* f) {
	$set(this, imHighlight, f);
	$init($EAttribute);
	update($EAttribute::EINPUT_METHOD_HIGHLIGHT);
}

int32_t AttributeValues::getInputMethodUnderline() {
	return this->imUnderline;
}

void AttributeValues::setInputMethodUnderline(int32_t f) {
	this->imUnderline = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::EINPUT_METHOD_UNDERLINE);
}

bool AttributeValues::getSwapColors() {
	return this->swapColors;
}

void AttributeValues::setSwapColors(bool f) {
	this->swapColors = f;
	$init($EAttribute);
	update($EAttribute::ESWAP_COLORS);
}

$NumericShaper* AttributeValues::getNumericShaping() {
	return this->numericShaping;
}

void AttributeValues::setNumericShaping($NumericShaper* f) {
	$set(this, numericShaping, f);
	$init($EAttribute);
	update($EAttribute::ENUMERIC_SHAPING);
}

int32_t AttributeValues::getKerning() {
	return this->kerning;
}

void AttributeValues::setKerning(int32_t f) {
	this->kerning = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::EKERNING);
}

float AttributeValues::getTracking() {
	return this->tracking;
}

void AttributeValues::setTracking(float f) {
	this->tracking = (float)$cast(int8_t, f);
	$init($EAttribute);
	update($EAttribute::ETRACKING);
}

int32_t AttributeValues::getLigatures() {
	return this->ligatures;
}

void AttributeValues::setLigatures(int32_t f) {
	this->ligatures = (int8_t)f;
	$init($EAttribute);
	update($EAttribute::ELIGATURES);
}

$AffineTransform* AttributeValues::getBaselineTransform() {
	return this->baselineTransform;
}

$AffineTransform* AttributeValues::getCharTransform() {
	return this->charTransform;
}

int32_t AttributeValues::getMask($EAttribute* att) {
	$init(AttributeValues);
	return $nc(att)->mask;
}

int32_t AttributeValues::getMask($EAttributeArray* atts) {
	$init(AttributeValues);
	int32_t mask = 0;
	{
		$var($EAttributeArray, arr$, atts);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$EAttribute* a = arr$->get(i$);
			{
				mask |= $nc(a)->mask;
			}
		}
	}
	return mask;
}

void AttributeValues::unsetDefault() {
	this->defined &= (uint32_t)this->nondefault;
}

void AttributeValues::defineAll(int32_t mask) {
	this->defined |= mask;
	$init($EAttribute);
	if (((int32_t)(this->defined & (uint32_t)$EAttribute::EBASELINE_TRANSFORM->mask)) != 0) {
		$throwNew($InternalError, "can\'t define derived attribute"_s);
	}
}

bool AttributeValues::allDefined(int32_t mask) {
	return ((int32_t)(this->defined & (uint32_t)mask)) == mask;
}

bool AttributeValues::anyDefined(int32_t mask) {
	return ((int32_t)(this->defined & (uint32_t)mask)) != 0;
}

bool AttributeValues::anyNonDefault(int32_t mask) {
	return ((int32_t)(this->nondefault & (uint32_t)mask)) != 0;
}

bool AttributeValues::isDefined($EAttribute* a) {
	return ((int32_t)(this->defined & (uint32_t)$nc(a)->mask)) != 0;
}

bool AttributeValues::isNonDefault($EAttribute* a) {
	return ((int32_t)(this->nondefault & (uint32_t)$nc(a)->mask)) != 0;
}

void AttributeValues::setDefault($EAttribute* a) {
	if ($nc(a)->att == nullptr) {
		$throwNew($InternalError, $$str({"can\'t set default derived attribute: "_s, a}));
	}
	i_set(a, AttributeValues::DEFAULT);
	this->defined |= $nc(a)->mask;
	this->nondefault &= (uint32_t)~a->mask;
}

void AttributeValues::unset($EAttribute* a) {
	if ($nc(a)->att == nullptr) {
		$throwNew($InternalError, $$str({"can\'t unset derived attribute: "_s, a}));
	}
	i_set(a, AttributeValues::DEFAULT);
	this->defined &= (uint32_t)~$nc(a)->mask;
	this->nondefault &= (uint32_t)~a->mask;
}

void AttributeValues::set($EAttribute* a, AttributeValues* src) {
	if ($nc(a)->att == nullptr) {
		$throwNew($InternalError, $$str({"can\'t set derived attribute: "_s, a}));
	}
	if (src == nullptr || src == AttributeValues::DEFAULT) {
		setDefault(a);
	} else if (((int32_t)($nc(src)->defined & (uint32_t)$nc(a)->mask)) != 0) {
		i_set(a, src);
		update(a);
	}
}

void AttributeValues::set($EAttribute* a, Object$* o) {
	if ($nc(a)->att == nullptr) {
		$throwNew($InternalError, $$str({"can\'t set derived attribute: "_s, a}));
	}
	if (o != nullptr) {
		try {
			i_set(a, o);
			update(a);
			return;
		} catch ($Exception& e) {
		}
	}
	setDefault(a);
}

$Object* AttributeValues::get($EAttribute* a) {
	if ($nc(a)->att == nullptr) {
		$throwNew($InternalError, $$str({"can\'t get derived attribute: "_s, a}));
	}
	if (((int32_t)(this->nondefault & (uint32_t)$nc(a)->mask)) != 0) {
		return $of(i_get(a));
	}
	return $of(nullptr);
}

AttributeValues* AttributeValues::merge($Map* map) {
	return merge(map, AttributeValues::MASK_ALL);
}

AttributeValues* AttributeValues::merge($Map* map, int32_t mask) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AttributeMap, map) && $nc(($cast($AttributeMap, map)))->getValues() != nullptr) {
		merge($(($cast($AttributeMap, map))->getValues()), mask);
	} else if (map != nullptr && !map->isEmpty()) {
		{
			$var($Iterator, i$, $nc($(map->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					try {
						$EAttribute* ea = $EAttribute::forAttribute($cast($AttributedCharacterIterator$Attribute, $($nc(e)->getKey())));
						if (ea != nullptr && ((int32_t)(mask & (uint32_t)ea->mask)) != 0) {
							set(ea, $($nc(e)->getValue()));
						}
					} catch ($ClassCastException& cce) {
					}
				}
			}
		}
	}
	return this;
}

AttributeValues* AttributeValues::merge(AttributeValues* src) {
	return merge(src, AttributeValues::MASK_ALL);
}

AttributeValues* AttributeValues::merge(AttributeValues* src, int32_t mask) {
	int32_t m = (int32_t)(mask & (uint32_t)$nc(src)->defined);
	{
		$init($EAttribute);
		$var($EAttributeArray, arr$, $EAttribute::atts);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$EAttribute* ea = arr$->get(i$);
			{
				if (m == 0) {
					break;
				}
				if (((int32_t)(m & (uint32_t)$nc(ea)->mask)) != 0) {
					m &= (uint32_t)~ea->mask;
					i_set(ea, src);
					update(ea);
				}
			}
		}
	}
	return this;
}

AttributeValues* AttributeValues::fromMap($Map* map) {
	$init(AttributeValues);
	return fromMap(map, AttributeValues::MASK_ALL);
}

AttributeValues* AttributeValues::fromMap($Map* map, int32_t mask) {
	$init(AttributeValues);
	return $$new(AttributeValues)->merge(map, mask);
}

$Map* AttributeValues::toMap($Map* fill$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Map, fill, fill$renamed);
	if (fill == nullptr) {
		$assign(fill, $new($HashMap));
	}
	{
		int32_t m = this->defined;
		int32_t i = 0;
		for (; m != 0; ++i) {
			$init($EAttribute);
			$EAttribute* ea = $nc($EAttribute::atts)->get(i);
			if (((int32_t)(m & (uint32_t)$nc(ea)->mask)) != 0) {
				m &= (uint32_t)~ea->mask;
				$nc(fill)->put(ea->att, $(get(ea)));
			}
		}
	}
	return fill;
}

bool AttributeValues::is16Hashtable($Hashtable* ht) {
	$init(AttributeValues);
	return $nc(ht)->containsKey(AttributeValues::DEFINED_KEY);
}

AttributeValues* AttributeValues::fromSerializableHashtable($Hashtable* ht) {
	$init(AttributeValues);
	$useLocalCurrentObjectStackCache();
	$var(AttributeValues, result, $new(AttributeValues));
	if (ht != nullptr && !ht->isEmpty()) {
		{
			$var($Iterator, i$, $nc($(ht->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, key, $nc(e)->getKey());
					$var($Object, val, e->getValue());
					if ($nc($of(key))->equals(AttributeValues::DEFINED_KEY)) {
						result->defineAll($nc(($cast($Integer, val)))->intValue());
					} else {
						try {
							$EAttribute* ea = $EAttribute::forAttribute($cast($AttributedCharacterIterator$Attribute, key));
							if (ea != nullptr) {
								result->set(ea, val);
							}
						} catch ($ClassCastException& ex) {
						}
					}
				}
			}
		}
	}
	return result;
}

$Hashtable* AttributeValues::toSerializableHashtable() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, ht, $new($Hashtable));
	int32_t hashkey = this->defined;
	{
		int32_t m = this->defined;
		int32_t i = 0;
		for (; m != 0; ++i) {
			$init($EAttribute);
			$EAttribute* ea = $nc($EAttribute::atts)->get(i);
			if (((int32_t)(m & (uint32_t)$nc(ea)->mask)) != 0) {
				m &= (uint32_t)~ea->mask;
				$var($Object, o, get(ea));
				if (o == nullptr) {
				} else if ($instanceOf($Serializable, o)) {
					ht->put(ea->att, o);
				} else {
					hashkey &= (uint32_t)~ea->mask;
				}
			}
		}
	}
	ht->put(AttributeValues::DEFINED_KEY, $($Integer::valueOf(hashkey)));
	return ht;
}

int32_t AttributeValues::hashCode() {
	return (this->defined << 8) ^ this->nondefault;
}

bool AttributeValues::equals(Object$* rhs) {
	try {
		return equals($cast(AttributeValues, rhs));
	} catch ($ClassCastException& e) {
	}
	return false;
}

bool AttributeValues::equals(AttributeValues* rhs) {
	$useLocalCurrentObjectStackCache();
	if (rhs == nullptr) {
		return false;
	}
	if (rhs == this) {
		return true;
	}
	bool var$7 = this->defined == $nc(rhs)->defined && this->nondefault == rhs->nondefault && this->underline == rhs->underline && this->strikethrough == rhs->strikethrough && this->superscript == rhs->superscript && this->width == rhs->width && this->kerning == rhs->kerning && this->tracking == rhs->tracking && this->ligatures == rhs->ligatures && this->runDirection == rhs->runDirection && this->bidiEmbedding == rhs->bidiEmbedding && this->swapColors == rhs->swapColors && equals(this->transform, rhs->transform);
	bool var$6 = var$7 && equals(this->foreground, rhs->foreground);
	bool var$5 = var$6 && equals(this->background, rhs->background);
	bool var$4 = var$5 && equals(this->numericShaping, rhs->numericShaping);
	if (var$4) {
		$var($Object, var$8, $of($Float::valueOf(this->justification)));
		var$4 = equals(var$8, $($Float::valueOf(rhs->justification)));
	}
	bool var$3 = var$4;
	bool var$2 = var$3 && equals(this->charReplacement, rhs->charReplacement) && this->size == rhs->size && this->weight == rhs->weight && this->posture == rhs->posture;
	bool var$1 = var$2 && equals(this->family, rhs->family);
	bool var$0 = var$1 && equals(this->font, rhs->font) && this->imUnderline == rhs->imUnderline;
	return var$0 && equals(this->imHighlight, rhs->imHighlight);
}

AttributeValues* AttributeValues::clone() {
	try {
		$var(AttributeValues, result, $cast(AttributeValues, $Cloneable::clone()));
		if (this->transform != nullptr) {
			$set($nc(result), transform, $new($AffineTransform, this->transform));
			result->updateDerivedTransforms();
		}
		return result;
	} catch ($CloneNotSupportedException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* AttributeValues::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'{');
	{
		int32_t m = this->defined;
		int32_t i = 0;
		for (; m != 0; ++i) {
			$init($EAttribute);
			$EAttribute* ea = $nc($EAttribute::atts)->get(i);
			if (((int32_t)(m & (uint32_t)$nc(ea)->mask)) != 0) {
				m &= (uint32_t)~ea->mask;
				if (b->length() > 1) {
					b->append(", "_s);
				}
				b->append($of(ea));
				b->append(u'=');
				$init($AttributeValues$1);
				switch ($nc($AttributeValues$1::$SwitchMap$sun$font$EAttribute)->get((ea)->ordinal())) {
				case 1:
					{
						b->append(u'\"');
						b->append(this->family);
						b->append(u'\"');
						break;
					}
				case 2:
					{
						b->append(this->weight);
						break;
					}
				case 3:
					{
						b->append(this->width);
						break;
					}
				case 4:
					{
						b->append(this->posture);
						break;
					}
				case 5:
					{
						b->append(this->size);
						break;
					}
				case 6:
					{
						b->append($of(this->transform));
						break;
					}
				case 7:
					{
						b->append((int32_t)this->superscript);
						break;
					}
				case 8:
					{
						b->append($of(this->font));
						break;
					}
				case 9:
					{
						b->append($of(this->charReplacement));
						break;
					}
				case 10:
					{
						b->append($of(this->foreground));
						break;
					}
				case 11:
					{
						b->append($of(this->background));
						break;
					}
				case 12:
					{
						b->append((int32_t)this->underline);
						break;
					}
				case 13:
					{
						b->append(this->strikethrough);
						break;
					}
				case 14:
					{
						b->append((int32_t)this->runDirection);
						break;
					}
				case 15:
					{
						b->append((int32_t)this->bidiEmbedding);
						break;
					}
				case 16:
					{
						b->append(this->justification);
						break;
					}
				case 17:
					{
						b->append(this->imHighlight);
						break;
					}
				case 18:
					{
						b->append((int32_t)this->imUnderline);
						break;
					}
				case 19:
					{
						b->append(this->swapColors);
						break;
					}
				case 20:
					{
						b->append($of(this->numericShaping));
						break;
					}
				case 21:
					{
						b->append((int32_t)this->kerning);
						break;
					}
				case 22:
					{
						b->append((int32_t)this->ligatures);
						break;
					}
				case 23:
					{
						b->append(this->tracking);
						break;
					}
				default:
					{
						$throwNew($InternalError);
					}
				}
				if (((int32_t)(this->nondefault & (uint32_t)ea->mask)) == 0) {
					b->append(u'*');
				}
			}
		}
	}
	b->append($$str({"[btx="_s, this->baselineTransform, ", ctx="_s, this->charTransform, "]"_s}));
	b->append(u'}');
	return b->toString();
}

bool AttributeValues::equals(Object$* lhs, Object$* rhs) {
	$init(AttributeValues);
	return lhs == nullptr ? rhs == nullptr : $nc($of(lhs))->equals(rhs);
}

void AttributeValues::update($EAttribute* a) {
	this->defined |= $nc(a)->mask;
	if (i_validate(a)) {
		if (i_equals(a, AttributeValues::DEFAULT)) {
			this->nondefault &= (uint32_t)~a->mask;
		} else {
			this->nondefault |= a->mask;
		}
	} else {
		setDefault(a);
	}
}

void AttributeValues::i_set($EAttribute* a, AttributeValues* src) {
	$init($AttributeValues$1);
	switch ($nc($AttributeValues$1::$SwitchMap$sun$font$EAttribute)->get($nc((a))->ordinal())) {
	case 1:
		{
			$set(this, family, $nc(src)->family);
			break;
		}
	case 2:
		{
			this->weight = $nc(src)->weight;
			break;
		}
	case 3:
		{
			this->width = $nc(src)->width;
			break;
		}
	case 4:
		{
			this->posture = $nc(src)->posture;
			break;
		}
	case 5:
		{
			this->size = $nc(src)->size;
			break;
		}
	case 6:
		{
			$set(this, transform, $nc(src)->transform);
			updateDerivedTransforms();
			break;
		}
	case 7:
		{
			this->superscript = $nc(src)->superscript;
			break;
		}
	case 8:
		{
			$set(this, font, $nc(src)->font);
			break;
		}
	case 9:
		{
			$set(this, charReplacement, $nc(src)->charReplacement);
			break;
		}
	case 10:
		{
			$set(this, foreground, $nc(src)->foreground);
			break;
		}
	case 11:
		{
			$set(this, background, $nc(src)->background);
			break;
		}
	case 12:
		{
			this->underline = $nc(src)->underline;
			break;
		}
	case 13:
		{
			this->strikethrough = $nc(src)->strikethrough;
			break;
		}
	case 14:
		{
			this->runDirection = $nc(src)->runDirection;
			break;
		}
	case 15:
		{
			this->bidiEmbedding = $nc(src)->bidiEmbedding;
			break;
		}
	case 16:
		{
			this->justification = $nc(src)->justification;
			break;
		}
	case 17:
		{
			$set(this, imHighlight, $nc(src)->imHighlight);
			break;
		}
	case 18:
		{
			this->imUnderline = $nc(src)->imUnderline;
			break;
		}
	case 19:
		{
			this->swapColors = $nc(src)->swapColors;
			break;
		}
	case 20:
		{
			$set(this, numericShaping, $nc(src)->numericShaping);
			break;
		}
	case 21:
		{
			this->kerning = $nc(src)->kerning;
			break;
		}
	case 22:
		{
			this->ligatures = $nc(src)->ligatures;
			break;
		}
	case 23:
		{
			this->tracking = $nc(src)->tracking;
			break;
		}
	default:
		{
			$throwNew($InternalError);
		}
	}
}

bool AttributeValues::i_equals($EAttribute* a, AttributeValues* src) {
	$init($AttributeValues$1);
	switch ($nc($AttributeValues$1::$SwitchMap$sun$font$EAttribute)->get($nc((a))->ordinal())) {
	case 1:
		{
			return equals(this->family, $nc(src)->family);
		}
	case 2:
		{
			return this->weight == $nc(src)->weight;
		}
	case 3:
		{
			return this->width == $nc(src)->width;
		}
	case 4:
		{
			return this->posture == $nc(src)->posture;
		}
	case 5:
		{
			return this->size == $nc(src)->size;
		}
	case 6:
		{
			return equals(this->transform, $nc(src)->transform);
		}
	case 7:
		{
			return this->superscript == $nc(src)->superscript;
		}
	case 8:
		{
			return equals(this->font, $nc(src)->font);
		}
	case 9:
		{
			return equals(this->charReplacement, $nc(src)->charReplacement);
		}
	case 10:
		{
			return equals(this->foreground, $nc(src)->foreground);
		}
	case 11:
		{
			return equals(this->background, $nc(src)->background);
		}
	case 12:
		{
			return this->underline == $nc(src)->underline;
		}
	case 13:
		{
			return this->strikethrough == $nc(src)->strikethrough;
		}
	case 14:
		{
			return this->runDirection == $nc(src)->runDirection;
		}
	case 15:
		{
			return this->bidiEmbedding == $nc(src)->bidiEmbedding;
		}
	case 16:
		{
			return this->justification == $nc(src)->justification;
		}
	case 17:
		{
			return equals(this->imHighlight, $nc(src)->imHighlight);
		}
	case 18:
		{
			return this->imUnderline == $nc(src)->imUnderline;
		}
	case 19:
		{
			return this->swapColors == $nc(src)->swapColors;
		}
	case 20:
		{
			return equals(this->numericShaping, $nc(src)->numericShaping);
		}
	case 21:
		{
			return this->kerning == $nc(src)->kerning;
		}
	case 22:
		{
			return this->ligatures == $nc(src)->ligatures;
		}
	case 23:
		{
			return this->tracking == $nc(src)->tracking;
		}
	default:
		{
			$throwNew($InternalError);
		}
	}
}

void AttributeValues::i_set($EAttribute* a, Object$* o) {
	$useLocalCurrentObjectStackCache();
	$init($AttributeValues$1);
	switch ($nc($AttributeValues$1::$SwitchMap$sun$font$EAttribute)->get($nc((a))->ordinal())) {
	case 1:
		{
			$set(this, family, $nc(($cast($String, o)))->trim());
			break;
		}
	case 2:
		{
			this->weight = $nc(($cast($Number, o)))->floatValue();
			break;
		}
	case 3:
		{
			this->width = $nc(($cast($Number, o)))->floatValue();
			break;
		}
	case 4:
		{
			this->posture = $nc(($cast($Number, o)))->floatValue();
			break;
		}
	case 5:
		{
			this->size = $nc(($cast($Number, o)))->floatValue();
			break;
		}
	case 6:
		{
			{
				if ($instanceOf($TransformAttribute, o)) {
					$var($TransformAttribute, ta, $cast($TransformAttribute, o));
					if ($nc(ta)->isIdentity()) {
						$set(this, transform, nullptr);
					} else {
						$set(this, transform, ta->getTransform());
					}
				} else {
					$set(this, transform, $new($AffineTransform, $cast($AffineTransform, o)));
				}
				updateDerivedTransforms();
			}
			break;
		}
	case 7:
		{
			this->superscript = (int8_t)$nc(($cast($Integer, o)))->intValue();
			break;
		}
	case 8:
		{
			$set(this, font, $cast($Font, o));
			break;
		}
	case 9:
		{
			$set(this, charReplacement, $cast($GraphicAttribute, o));
			break;
		}
	case 10:
		{
			$set(this, foreground, $cast($Paint, o));
			break;
		}
	case 11:
		{
			$set(this, background, $cast($Paint, o));
			break;
		}
	case 12:
		{
			this->underline = (int8_t)$nc(($cast($Integer, o)))->intValue();
			break;
		}
	case 13:
		{
			this->strikethrough = $nc(($cast($Boolean, o)))->booleanValue();
			break;
		}
	case 14:
		{
			{
				if ($instanceOf($Boolean, o)) {
					$init($TextAttribute);
					this->runDirection = (int8_t)($nc($TextAttribute::RUN_DIRECTION_LTR)->equals(o) ? 0 : 1);
				} else {
					this->runDirection = (int8_t)$nc(($cast($Integer, o)))->intValue();
				}
			}
			break;
		}
	case 15:
		{
			this->bidiEmbedding = (int8_t)$nc(($cast($Integer, o)))->intValue();
			break;
		}
	case 16:
		{
			this->justification = $nc(($cast($Number, o)))->floatValue();
			break;
		}
	case 17:
		{
			{
				if ($instanceOf($Annotation, o)) {
					$var($Annotation, at, $cast($Annotation, o));
					$set(this, imHighlight, $cast($InputMethodHighlight, $nc(at)->getValue()));
				} else {
					$set(this, imHighlight, $cast($InputMethodHighlight, o));
				}
			}
			break;
		}
	case 18:
		{
			this->imUnderline = (int8_t)$nc(($cast($Integer, o)))->intValue();
			break;
		}
	case 19:
		{
			this->swapColors = $nc(($cast($Boolean, o)))->booleanValue();
			break;
		}
	case 20:
		{
			$set(this, numericShaping, $cast($NumericShaper, o));
			break;
		}
	case 21:
		{
			this->kerning = (int8_t)$nc(($cast($Integer, o)))->intValue();
			break;
		}
	case 22:
		{
			this->ligatures = (int8_t)$nc(($cast($Integer, o)))->intValue();
			break;
		}
	case 23:
		{
			this->tracking = $nc(($cast($Number, o)))->floatValue();
			break;
		}
	default:
		{
			$throwNew($InternalError);
		}
	}
}

$Object* AttributeValues::i_get($EAttribute* a) {
	$init($AttributeValues$1);
	switch ($nc($AttributeValues$1::$SwitchMap$sun$font$EAttribute)->get($nc((a))->ordinal())) {
	case 1:
		{
			return $of(this->family);
		}
	case 2:
		{
			return $of($Float::valueOf(this->weight));
		}
	case 3:
		{
			return $of($Float::valueOf(this->width));
		}
	case 4:
		{
			return $of($Float::valueOf(this->posture));
		}
	case 5:
		{
			return $of($Float::valueOf(this->size));
		}
	case 6:
		{
			$init($TransformAttribute);
			return $of(this->transform == nullptr ? $of($TransformAttribute::IDENTITY) : $of($new($TransformAttribute, this->transform)));
		}
	case 7:
		{
			return $of($Integer::valueOf((int32_t)this->superscript));
		}
	case 8:
		{
			return $of(this->font);
		}
	case 9:
		{
			return $of(this->charReplacement);
		}
	case 10:
		{
			return $of(this->foreground);
		}
	case 11:
		{
			return $of(this->background);
		}
	case 12:
		{
			return $of($Integer::valueOf((int32_t)this->underline));
		}
	case 13:
		{
			return $of($Boolean::valueOf(this->strikethrough));
		}
	case 14:
		{
			{
				switch (this->runDirection) {
				case 0:
					{
						$init($TextAttribute);
						return $of($TextAttribute::RUN_DIRECTION_LTR);
					}
				case 1:
					{
						$init($TextAttribute);
						return $of($TextAttribute::RUN_DIRECTION_RTL);
					}
				default:
					{
						return $of(nullptr);
					}
				}
			}
		}
	case 15:
		{
			return $of($Integer::valueOf((int32_t)this->bidiEmbedding));
		}
	case 16:
		{
			return $of($Float::valueOf(this->justification));
		}
	case 17:
		{
			return $of(this->imHighlight);
		}
	case 18:
		{
			return $of($Integer::valueOf((int32_t)this->imUnderline));
		}
	case 19:
		{
			return $of($Boolean::valueOf(this->swapColors));
		}
	case 20:
		{
			return $of(this->numericShaping);
		}
	case 21:
		{
			return $of($Integer::valueOf((int32_t)this->kerning));
		}
	case 22:
		{
			return $of($Integer::valueOf((int32_t)this->ligatures));
		}
	case 23:
		{
			return $of($Float::valueOf(this->tracking));
		}
	default:
		{
			$throwNew($InternalError);
		}
	}
}

bool AttributeValues::i_validate($EAttribute* a) {
	$init($AttributeValues$1);
	switch ($nc($AttributeValues$1::$SwitchMap$sun$font$EAttribute)->get($nc((a))->ordinal())) {
	case 1:
		{
			if (this->family == nullptr || $nc(this->family)->length() == 0) {
				$set(this, family, $nc(AttributeValues::DEFAULT)->family);
			}
			return true;
		}
	case 2:
		{
			return this->weight > 0 && this->weight < 10;
		}
	case 3:
		{
			return this->width >= 0.5f && this->width < 10;
		}
	case 4:
		{
			return this->posture >= -1 && this->posture <= 1;
		}
	case 5:
		{
			return this->size >= 0;
		}
	case 6:
		{
			if (this->transform != nullptr && $nc(this->transform)->isIdentity()) {
				$set(this, transform, $nc(AttributeValues::DEFAULT)->transform);
			}
			return true;
		}
	case 7:
		{
			return this->superscript >= -7 && this->superscript <= 7;
		}
	case 8:
		{
			return true;
		}
	case 9:
		{
			return true;
		}
	case 10:
		{
			return true;
		}
	case 11:
		{
			return true;
		}
	case 12:
		{
			return this->underline >= -1 && this->underline < 6;
		}
	case 13:
		{
			return true;
		}
	case 14:
		{
			return this->runDirection >= -2 && this->runDirection <= 1;
		}
	case 15:
		{
			return this->bidiEmbedding >= -61 && this->bidiEmbedding < 62;
		}
	case 16:
		{
			this->justification = $Math::max((float)0, $Math::min(this->justification, (float)1));
			return true;
		}
	case 17:
		{
			return true;
		}
	case 18:
		{
			return this->imUnderline >= -1 && this->imUnderline < 6;
		}
	case 19:
		{
			return true;
		}
	case 20:
		{
			return true;
		}
	case 21:
		{
			return this->kerning >= 0 && this->kerning <= 1;
		}
	case 22:
		{
			return this->ligatures >= 0 && this->ligatures <= 1;
		}
	case 23:
		{
			return this->tracking >= -1 && this->tracking <= 10;
		}
	default:
		{
			$throwNew($InternalError, $$str({"unknown attribute: "_s, a}));
		}
	}
}

float AttributeValues::getJustification($Map* map) {
	$init(AttributeValues);
	$useLocalCurrentObjectStackCache();
	if (map != nullptr) {
		if ($instanceOf($AttributeMap, map) && $nc(($cast($AttributeMap, map)))->getValues() != nullptr) {
			return $nc($(($cast($AttributeMap, map))->getValues()))->justification;
		}
		$init($TextAttribute);
		$var($Object, obj, map->get($TextAttribute::JUSTIFICATION));
		if (obj != nullptr && $instanceOf($Number, obj)) {
			return $Math::max((float)0, $Math::min((float)1, $nc(($cast($Number, obj)))->floatValue()));
		}
	}
	return $nc(AttributeValues::DEFAULT)->justification;
}

$NumericShaper* AttributeValues::getNumericShaping($Map* map) {
	$init(AttributeValues);
	$useLocalCurrentObjectStackCache();
	if (map != nullptr) {
		if ($instanceOf($AttributeMap, map) && $nc(($cast($AttributeMap, map)))->getValues() != nullptr) {
			return $nc($(($cast($AttributeMap, map))->getValues()))->numericShaping;
		}
		$init($TextAttribute);
		$var($Object, obj, map->get($TextAttribute::NUMERIC_SHAPING));
		if (obj != nullptr && $instanceOf($NumericShaper, obj)) {
			return $cast($NumericShaper, obj);
		}
	}
	return $nc(AttributeValues::DEFAULT)->numericShaping;
}

AttributeValues* AttributeValues::applyIMHighlight() {
	$useLocalCurrentObjectStackCache();
	if (this->imHighlight != nullptr) {
		$var($InputMethodHighlight, hl, nullptr);
		if ($instanceOf($InputMethodHighlight, this->imHighlight)) {
			$assign(hl, $cast($InputMethodHighlight, this->imHighlight));
		} else {
			$assign(hl, $cast($InputMethodHighlight, $nc(($cast($Annotation, this->imHighlight)))->getValue()));
		}
		$var($Map, imStyles, $nc(hl)->getStyle());
		if (imStyles == nullptr) {
			$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
			$assign(imStyles, $nc(tk)->mapInputMethodHighlight(hl));
		}
		if (imStyles != nullptr) {
			return $nc($(clone()))->merge(imStyles);
		}
	}
	return this;
}

$AffineTransform* AttributeValues::getBaselineTransform($Map* map) {
	$init(AttributeValues);
	if (map != nullptr) {
		$var(AttributeValues, av, nullptr);
		if ($instanceOf($AttributeMap, map) && $nc(($cast($AttributeMap, map)))->getValues() != nullptr) {
			$assign(av, ($cast($AttributeMap, map))->getValues());
		} else {
			$init($TextAttribute);
			if (map->get($TextAttribute::TRANSFORM) != nullptr) {
				$assign(av, AttributeValues::fromMap(map));
			}
		}
		if (av != nullptr) {
			return av->baselineTransform;
		}
	}
	return nullptr;
}

$AffineTransform* AttributeValues::getCharTransform($Map* map) {
	$init(AttributeValues);
	if (map != nullptr) {
		$var(AttributeValues, av, nullptr);
		if ($instanceOf($AttributeMap, map) && $nc(($cast($AttributeMap, map)))->getValues() != nullptr) {
			$assign(av, ($cast($AttributeMap, map))->getValues());
		} else {
			$init($TextAttribute);
			if (map->get($TextAttribute::TRANSFORM) != nullptr) {
				$assign(av, AttributeValues::fromMap(map));
			}
		}
		if (av != nullptr) {
			return av->charTransform;
		}
	}
	return nullptr;
}

void AttributeValues::updateDerivedTransforms() {
	if (this->transform == nullptr) {
		$set(this, baselineTransform, nullptr);
		$set(this, charTransform, nullptr);
	} else {
		$set(this, charTransform, $new($AffineTransform, this->transform));
		$set(this, baselineTransform, extractXRotation(this->charTransform, true));
		if ($nc(this->charTransform)->isIdentity()) {
			$set(this, charTransform, nullptr);
		}
		if ($nc(this->baselineTransform)->isIdentity()) {
			$set(this, baselineTransform, nullptr);
		}
	}
	if (this->baselineTransform == nullptr) {
		$init($EAttribute);
		this->nondefault &= (uint32_t)~$EAttribute::EBASELINE_TRANSFORM->mask;
	} else {
		$init($EAttribute);
		this->nondefault |= $EAttribute::EBASELINE_TRANSFORM->mask;
	}
}

$AffineTransform* AttributeValues::extractXRotation($AffineTransform* tx, bool andTranslation) {
	$init(AttributeValues);
	return extractRotation($$new($Point2D$Double, (double)1, (double)0), tx, andTranslation);
}

$AffineTransform* AttributeValues::extractYRotation($AffineTransform* tx, bool andTranslation) {
	$init(AttributeValues);
	return extractRotation($$new($Point2D$Double, (double)0, (double)1), tx, andTranslation);
}

$AffineTransform* AttributeValues::extractRotation($Point2D$Double* pt, $AffineTransform* tx, bool andTranslation) {
	$init(AttributeValues);
	$useLocalCurrentObjectStackCache();
	$nc(tx)->deltaTransform(pt, pt);
	$var($AffineTransform, rtx, $AffineTransform::getRotateInstance($nc(pt)->x, pt->y));
	try {
		$var($AffineTransform, rtxi, $nc(rtx)->createInverse());
		double dx = tx->getTranslateX();
		double dy = tx->getTranslateY();
		tx->preConcatenate(rtxi);
		if (andTranslation) {
			if (dx != 0 || dy != 0) {
				double var$0 = tx->getScaleX();
				double var$1 = tx->getShearY();
				double var$2 = tx->getShearX();
				tx->setTransform(var$0, var$1, var$2, tx->getScaleY(), (double)0, (double)0);
				double var$3 = rtx->getScaleX();
				double var$4 = rtx->getShearY();
				double var$5 = rtx->getShearX();
				rtx->setTransform(var$3, var$4, var$5, rtx->getScaleY(), dx, dy);
			}
		}
	} catch ($NoninvertibleTransformException& e) {
		return nullptr;
	}
	return rtx;
}

void clinit$AttributeValues($Class* class$) {
	$assignStatic(AttributeValues::DEFINED_KEY, "sun.font.attributevalues.defined_key"_s);
	$assignStatic(AttributeValues::DEFAULT, $new(AttributeValues));
	$load($EAttribute);
	AttributeValues::MASK_ALL = AttributeValues::getMask($fcast($EAttributeArray, $($EAttribute::class$->getEnumConstants())));
}

AttributeValues::AttributeValues() {
}

$Class* AttributeValues::load$($String* name, bool initialize) {
	$loadClass(AttributeValues, name, initialize, &_AttributeValues_ClassInfo_, clinit$AttributeValues, allocate$AttributeValues);
	return class$;
}

$Class* AttributeValues::class$ = nullptr;

	} // font
} // sun