// Code generated by protoc-gen-go. DO NOT EDIT.
// source: purchase.proto

package pb

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type Purchase struct {
	ClaimHash            []byte   `protobuf:"bytes,1,opt,name=claim_hash,json=claimHash,proto3" json:"claim_hash"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Purchase) Reset()         { *m = Purchase{} }
func (m *Purchase) String() string { return proto.CompactTextString(m) }
func (*Purchase) ProtoMessage()    {}
func (*Purchase) Descriptor() ([]byte, []int) {
	return fileDescriptor_ea8c7f112c6b4e9e, []int{0}
}

func (m *Purchase) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Purchase.Unmarshal(m, b)
}
func (m *Purchase) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Purchase.Marshal(b, m, deterministic)
}
func (m *Purchase) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Purchase.Merge(m, src)
}
func (m *Purchase) XXX_Size() int {
	return xxx_messageInfo_Purchase.Size(m)
}
func (m *Purchase) XXX_DiscardUnknown() {
	xxx_messageInfo_Purchase.DiscardUnknown(m)
}

var xxx_messageInfo_Purchase proto.InternalMessageInfo

func (m *Purchase) GetClaimHash() []byte {
	if m != nil {
		return m.ClaimHash
	}
	return nil
}

func init() {
	proto.RegisterType((*Purchase)(nil), "pb.Purchase")
}

func init() { proto.RegisterFile("purchase.proto", fileDescriptor_ea8c7f112c6b4e9e) }

var fileDescriptor_ea8c7f112c6b4e9e = []byte{
	// 84 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0xe2, 0x2b, 0x28, 0x2d, 0x4a,
	0xce, 0x48, 0x2c, 0x4e, 0xd5, 0x2b, 0x28, 0xca, 0x2f, 0xc9, 0x17, 0x62, 0x2a, 0x48, 0x52, 0xd2,
	0xe4, 0xe2, 0x08, 0x80, 0x8a, 0x0a, 0xc9, 0x72, 0x71, 0x25, 0xe7, 0x24, 0x66, 0xe6, 0xc6, 0x67,
	0x24, 0x16, 0x67, 0x48, 0x30, 0x2a, 0x30, 0x6a, 0xf0, 0x04, 0x71, 0x82, 0x45, 0x3c, 0x12, 0x8b,
	0x33, 0x92, 0xd8, 0xc0, 0xba, 0x8c, 0x01, 0x01, 0x00, 0x00, 0xff, 0xff, 0xfd, 0xba, 0x94, 0x00,
	0x47, 0x00, 0x00, 0x00,
}
