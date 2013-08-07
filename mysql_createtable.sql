create table goods_info
(
  goods_id int(8) not null primary key,
  name     char(10) not null,
  state    datetime
);

insert into goods_info (goods_id,name,state) values (1,'ËÕ²´¶ûË®ÁúÍ·','2013-08-01 14:44:00');