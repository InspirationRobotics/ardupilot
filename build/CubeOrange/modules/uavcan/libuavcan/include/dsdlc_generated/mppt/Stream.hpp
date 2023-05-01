/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/eesh/ardupilot/modules/uavcan/dsdl/mppt/20020.Stream.uavcan
 */

#ifndef MPPT_STREAM_HPP_INCLUDED
#define MPPT_STREAM_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# MPPT streaming data, transmitted at 1Hz
#

uint8 OV_FAULT = 1 # over-voltage
uint8 UV_FAULT = 2 # under-voltage
uint8 OC_FAULT = 4 # over-current
uint8 OT_FAULT = 8 # over-temperature
uint8 fault_flags

int8 temperature # [Celsius]

float16 input_voltage # [Volt]
float16 input_current # [Amp]
float16 input_power # [Watt]

float16 output_voltage # [Volt]
float16 output_current # [Amp]
float16 output_power # [Watt]
******************************************************************************/

/********************* DSDL signature source definition ***********************
mppt.Stream
saturated uint8 fault_flags
saturated int8 temperature
saturated float16 input_voltage
saturated float16 input_current
saturated float16 input_power
saturated float16 output_voltage
saturated float16 output_current
saturated float16 output_power
******************************************************************************/

#undef fault_flags
#undef temperature
#undef input_voltage
#undef input_current
#undef input_power
#undef output_voltage
#undef output_current
#undef output_power
#undef OV_FAULT
#undef UV_FAULT
#undef OC_FAULT
#undef OT_FAULT

namespace mppt
{

template <int _tmpl>
struct UAVCAN_EXPORT Stream_
{
    typedef const Stream_<_tmpl>& ParameterType;
    typedef Stream_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OV_FAULT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > UV_FAULT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OC_FAULT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OT_FAULT;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > fault_flags;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate > temperature;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > input_voltage;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > input_current;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > input_power;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > output_voltage;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > output_current;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > output_power;
    };

    enum
    {
        MinBitLen
            = FieldTypes::fault_flags::MinBitLen
            + FieldTypes::temperature::MinBitLen
            + FieldTypes::input_voltage::MinBitLen
            + FieldTypes::input_current::MinBitLen
            + FieldTypes::input_power::MinBitLen
            + FieldTypes::output_voltage::MinBitLen
            + FieldTypes::output_current::MinBitLen
            + FieldTypes::output_power::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::fault_flags::MaxBitLen
            + FieldTypes::temperature::MaxBitLen
            + FieldTypes::input_voltage::MaxBitLen
            + FieldTypes::input_current::MaxBitLen
            + FieldTypes::input_power::MaxBitLen
            + FieldTypes::output_voltage::MaxBitLen
            + FieldTypes::output_current::MaxBitLen
            + FieldTypes::output_power::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::OV_FAULT >::Type OV_FAULT; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::UV_FAULT >::Type UV_FAULT; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::OC_FAULT >::Type OC_FAULT; // 4
    static const typename ::uavcan::StorageType< typename ConstantTypes::OT_FAULT >::Type OT_FAULT; // 8

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::fault_flags >::Type fault_flags;
    typename ::uavcan::StorageType< typename FieldTypes::temperature >::Type temperature;
    typename ::uavcan::StorageType< typename FieldTypes::input_voltage >::Type input_voltage;
    typename ::uavcan::StorageType< typename FieldTypes::input_current >::Type input_current;
    typename ::uavcan::StorageType< typename FieldTypes::input_power >::Type input_power;
    typename ::uavcan::StorageType< typename FieldTypes::output_voltage >::Type output_voltage;
    typename ::uavcan::StorageType< typename FieldTypes::output_current >::Type output_current;
    typename ::uavcan::StorageType< typename FieldTypes::output_power >::Type output_power;

    Stream_()
        : fault_flags()
        , temperature()
        , input_voltage()
        , input_current()
        , input_power()
        , output_voltage()
        , output_current()
        , output_power()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<112 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 20020 };

    static const char* getDataTypeFullName()
    {
        return "mppt.Stream";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Stream_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        fault_flags == rhs.fault_flags &&
        temperature == rhs.temperature &&
        input_voltage == rhs.input_voltage &&
        input_current == rhs.input_current &&
        input_power == rhs.input_power &&
        output_voltage == rhs.output_voltage &&
        output_current == rhs.output_current &&
        output_power == rhs.output_power;
}

template <int _tmpl>
bool Stream_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(fault_flags, rhs.fault_flags) &&
        ::uavcan::areClose(temperature, rhs.temperature) &&
        ::uavcan::areClose(input_voltage, rhs.input_voltage) &&
        ::uavcan::areClose(input_current, rhs.input_current) &&
        ::uavcan::areClose(input_power, rhs.input_power) &&
        ::uavcan::areClose(output_voltage, rhs.output_voltage) &&
        ::uavcan::areClose(output_current, rhs.output_current) &&
        ::uavcan::areClose(output_power, rhs.output_power);
}

template <int _tmpl>
int Stream_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::fault_flags::encode(self.fault_flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperature::encode(self.temperature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input_voltage::encode(self.input_voltage, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input_current::encode(self.input_current, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input_power::encode(self.input_power, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output_voltage::encode(self.output_voltage, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output_current::encode(self.output_current, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output_power::encode(self.output_power, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Stream_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::fault_flags::decode(self.fault_flags, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperature::decode(self.temperature, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input_voltage::decode(self.input_voltage, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input_current::decode(self.input_current, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::input_power::decode(self.input_power, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output_voltage::decode(self.output_voltage, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output_current::decode(self.output_current, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output_power::decode(self.output_power, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Stream_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xDD7096B255FB6358ULL);

    FieldTypes::fault_flags::extendDataTypeSignature(signature);
    FieldTypes::temperature::extendDataTypeSignature(signature);
    FieldTypes::input_voltage::extendDataTypeSignature(signature);
    FieldTypes::input_current::extendDataTypeSignature(signature);
    FieldTypes::input_power::extendDataTypeSignature(signature);
    FieldTypes::output_voltage::extendDataTypeSignature(signature);
    FieldTypes::output_current::extendDataTypeSignature(signature);
    FieldTypes::output_power::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Stream_<_tmpl>::ConstantTypes::OV_FAULT >::Type
    Stream_<_tmpl>::OV_FAULT = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Stream_<_tmpl>::ConstantTypes::UV_FAULT >::Type
    Stream_<_tmpl>::UV_FAULT = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename Stream_<_tmpl>::ConstantTypes::OC_FAULT >::Type
    Stream_<_tmpl>::OC_FAULT = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename Stream_<_tmpl>::ConstantTypes::OT_FAULT >::Type
    Stream_<_tmpl>::OT_FAULT = 8U; // 8

/*
 * Final typedef
 */
typedef Stream_<0> Stream;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::mppt::Stream > _uavcan_gdtr_registrator_Stream;

}

} // Namespace mppt

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::mppt::Stream >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::mppt::Stream::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::mppt::Stream >::stream(Stream& s, ::mppt::Stream::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "fault_flags: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::fault_flags >::stream(s, obj.fault_flags, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "temperature: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::temperature >::stream(s, obj.temperature, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "input_voltage: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::input_voltage >::stream(s, obj.input_voltage, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "input_current: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::input_current >::stream(s, obj.input_current, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "input_power: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::input_power >::stream(s, obj.input_power, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "output_voltage: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::output_voltage >::stream(s, obj.output_voltage, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "output_current: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::output_current >::stream(s, obj.output_current, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "output_power: ";
    YamlStreamer< ::mppt::Stream::FieldTypes::output_power >::stream(s, obj.output_power, level + 1);
}

}

namespace mppt
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::mppt::Stream::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::mppt::Stream >::stream(s, obj, 0);
    return s;
}

} // Namespace mppt

#endif // MPPT_STREAM_HPP_INCLUDED