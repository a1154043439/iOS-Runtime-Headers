/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBulkSetItemPropertiesRequest : HSRequest {
}

+ (bool)isSupportedItemProperty:(id)arg1;
+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 itemID:(unsigned int)arg3 properties:(id)arg4;
+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 itemIDs:(id)arg3 properties:(id)arg4 useLongIDs:(bool)arg5;
+ (id)requestWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 longItemID:(unsigned long long)arg3 properties:(id)arg4;
+ (struct PropertyInfo { struct unordered_map<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::pair<unsigned int, DAAP::ValueType> >, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_1_1_1; } x1; }*)sharedPropertyInfo;

- (id)_bodyDataForSessionID:(unsigned int)arg1 itemIDs:(id)arg2 properties:(id)arg3 useLongIDs:(bool)arg4;
- (id)initWithDatabaseID:(unsigned int)arg1 sessionID:(unsigned int)arg2 itemIDs:(id)arg3 properties:(id)arg4 useLongIDs:(bool)arg5;

@end
