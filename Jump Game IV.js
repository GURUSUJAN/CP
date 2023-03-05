/**
 * @param {number[]} arr
 * @return {number}
 */
var minJumps = function(arr) {
    const map = {};
    const visited = Array(arr.length).fill(false);
    for (let i = 0; i < arr.length; i++) {
        if (!map[arr[i]]) {
            map[arr[i]] = [i];
        } else {
            map[arr[i]].push(i);
        }
    }
    const q = [[arr.length - 1, 0]];
    visited[arr.length - 1] = true;
    while (q.length) {
        let [idx, length] = q.shift();
       
        if (idx === 0) {
            return length;
        }
        length++;
        if (idx + 1 < arr.length && !visited[idx + 1]) {
            visited[idx + 1] = true;
            q.push([idx + 1, length]);
        }
        if (idx - 1 >= 0 && !visited[idx - 1]) {
            visited[idx - 1] = true;
            q.push([idx - 1, length]);
        }
        if (map[arr[idx]]) {
            while (map[arr[idx]].length) {
                const index = map[arr[idx]].pop();
                if (index === idx || visited[index]) {
                    continue;
                }
                visited[index] = true;
                q.push([index, length]);
            }
        }
    }
    
    
};
