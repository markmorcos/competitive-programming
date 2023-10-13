function simplifyPath(path: string): string {
    return `/${path.split('/').map(directory => directory.replace(/\//, ''))
        .reduce((subPath: string[], directory: string) => {
            if (directory === '..') return subPath.slice(0, -1);
            if (['', '.'].includes(directory)) return subPath;
            return [...subPath, directory];
        }, [])
        .join('/')}`;
};
