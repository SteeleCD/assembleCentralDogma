# generate sequence to sample reads from
seq = sample(c("A","C","T","G"),500,replace=TRUE)
readLength = 150
# generate reads
samples = sample(1:(length(seq)-readLength),1000,replace=TRUE)
reads = sapply(samples,FUN=function(x) paste(seq[x:(x+readLength)],collapse="",sep=""))
# write to file
write.table(reads,file="../data/strings.txt",quote=FALSE,col.names=FALSE,row.names=FALSE)
